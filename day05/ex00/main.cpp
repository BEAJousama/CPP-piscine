/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:05:17 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/20 12:05:18 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("test1", 115);
        Bureaucrat c = a;
        std::cout << c;
        a.GradeDecrement();
        std::cout << a;
        a.GradeIncrement();
        std::cout << a;
        a.GradeDecrement();
        std::cout << a;
        Bureaucrat b("test2", 0);
    }
    catch (std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat d("test3", 150);
        d.GradeDecrement();
    }
    catch (std::exception& e)
    {
        std::cout << "Error: " << e.what()<< std::endl;
    }
    try
    {
        Bureaucrat g("test4", 1);
        g.GradeIncrement();
        std::cout << g;
    }
    catch (std::exception& e)
    {
        std::cout << "Error: " << e.what()<< std::endl;
    }
}