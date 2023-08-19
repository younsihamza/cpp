/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:47:00 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/15 15:20:16 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType() 
{
    return (type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::~Weapon ()
{
    std::cout << "weapon destractor invoke " << std::endl;
}

 Weapon::Weapon(std::string type):type(type)
 {
    std::cout << "Weapon constuctor invoke" <<std::endl;
 }