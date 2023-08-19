/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:02:25 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/13 13:53:21 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::Zombie(std::string name):name(name)
{
    std::cout << "constructor called for " << name <<std::endl;
}

Zombie::~Zombie()
{
    std::cout << "destructor invoke of " << name << std::endl;
}