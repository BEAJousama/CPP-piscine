/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScarvTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:23:59 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/28 16:07:34 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScarvTrap.hpp"

ScarvTrap::ScarvTrap()
{
    std::cout << "ScarvTrap x : Putain ! j'suis né sans nom !"<< std::endl;
}

ScarvTrap::ScarvTrap(const ScarvTrap &obj)
{
    *this = obj;
}

ScarvTrap::ScarvTrap(std::string name)
{
    std::cout << name << " : Bonjour, je viens d'etre creé! Dieu merci."<< std::endl;
    this->AttackDamage = 20;
    this->EnergyPoints = 50;
    this->HitPoints = 100;
    this->name = name;
}

ScarvTrap::~ScarvTrap()
{
    std::cout << this->name << " : Oh eeeet je meurt! au revoir !" << std::endl;
}

ScarvTrap& ScarvTrap::operator=(const ScarvTrap  &obj)
{
    if (this == &obj)
        return *this;
    this->AttackDamage = obj.AttackDamage;
    this->EnergyPoints = obj.EnergyPoints;
    this->HitPoints = obj.HitPoints;
    return *this;
}

void ScarvTrap::attack(const std::string& target)
{
    if (this->HitPoints <= 0)
    {
        std::cout << this->name << " : Oh mon dieu, j n'ai plus de hit points  , je ne peux plus attquer!" << std::endl;
        return ;
    }
    if (this->EnergyPoints <= 0)
    {
        std::cout << this->name << " : Oh mon dieu, j n'ai plus d'energy points  , je ne peux plus attquer!" << std::endl;
        return ;
    }
    std::cout<< this->name << " : Hey " << target << " je vais t'abattre comme un chien, Yaaaaaaaaaaaa!" << std::endl;
    this->EnergyPoints--;  
}

void ScarvTrap::guardGate()
{
    std::cout<< this->name <<  " : J'active le Gate Keeper Mode !" << std::endl;
}