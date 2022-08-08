/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:47:41 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/08 17:46:48 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.h"
#define MAX_VAL 750

template<typename T> Array<T>::Array() : lenght(0)
{
    this->ptr = new T[0];
}

template<typename T> Array<T>::Array(unsigned int n)
{
    this-> lenght = n;
    this->ptr = new T[n];
}

template<typename T> Array<T>::Array(Array const &obj)
{
    this->ptr = nullptr;
    *this = obj;
}

template<typename T> Array<T>& Array<T>::operator=(Array const &obj)
{
    if(this == &obj)
        return *this;
    delete [] ptr;
    this->lenght = obj.lenght;
    if (obj.ptr)
    {
        this->ptr = new T[lenght];
        for(unsigned int i = 0; i < lenght; i++)
            this->ptr[i] = obj.ptr[i];
    }
    else
        this->ptr = nullptr;
    return *this;
}

template<typename T> unsigned int Array<T>::size() const
{
    return this->lenght;
}

template<typename T> T& Array<T>::operator[](int i) const
{
    if (i < static_cast<int>(lenght) && i >= 0)
        return ptr[i];
    else
        throw InvalidIndexException();
}

template <typename T> const char* Array<T>::InvalidIndexException::what() const throw()
{
    return("Invalid index !");
};

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (unsigned int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    try
    {
        numbers[2] = 5;
        for(unsigned int i = 0; i < numbers.size(); i++)
            std::cout<<numbers[i]<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}