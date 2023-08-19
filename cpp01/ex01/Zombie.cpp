/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:47:24 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/15 14:42:28 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::~Zombie(){
            std::cout << "destructor invoke for " << name << std::endl;
    }

Zombie::Zombie()
{
    std::cout << "default constructor called "<<std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}
