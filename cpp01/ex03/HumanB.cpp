/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:46:53 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/15 15:19:44 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):name(name),weapon(NULL)
{
   std::cout << "HumanB constructor called " <<std::endl;
}

void HumanB::attack()
{
    if(weapon != NULL)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout<<"no weapon to attacks with!!!"<<std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destractor invoke " <<std::endl;
}

HumanB::HumanB():name("default"),weapon(NULL)
{
    std::cout << "HumanB default constructor called " <<std::endl;
}