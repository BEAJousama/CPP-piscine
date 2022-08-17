/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 22:53:49 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/13 16:00:54 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &obj);
        Animal& operator=(const Animal &obj);
        virtual void  makeSound()const;
        std::string getType()const;
        virtual Brain *getBrain() const;
};

#endif