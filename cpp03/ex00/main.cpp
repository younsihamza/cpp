/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:33:16 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/21 10:33:16 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("hamza");
    ClapTrap b("younsi"); 

    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());
    b.attack(a.getName());
    a.takeDamage(b.getAttackDamage());
    a.beRepaired(100);
}