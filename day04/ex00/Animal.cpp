/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 22:53:43 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/17 10:54:49 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout<<"Animal created !"<<std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal &obj)
{
    *this = obj;
}

Animal::~Animal()
{
    std::cout<<"Animal destructed !"<<std::endl;
}

Animal& Animal::operator=(const Animal &obj)
{
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout<<"Animal voice"<<std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}