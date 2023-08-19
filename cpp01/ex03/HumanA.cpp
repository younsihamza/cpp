/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:46:48 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/13 16:46:48 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destractor invoke " << std::endl;
}

HumanA::HumanA(std::string name,Weapon& weapon):name(name),weapon(weapon)
{
    std::cout << "HumanA constructor called" <<std::endl;
}
