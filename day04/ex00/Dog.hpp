/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:22:19 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/02 12:38:21 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
#include "Animal.hpp"

class Dog : public virtual Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog &obj);
        Dog& operator=(const Dog &obj);
        void makeSound() const;
};

#endif