/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:33:13 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/21 14:19:03 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
class ClapTrap{
    private:
        std::string name;
        int HitPoint;
        int EnargyPoint;
        int AttackDamage;
    public:
        ClapTrap();
        ClapTrap(const ClapTrap &main);
        ClapTrap& operator=(const ClapTrap &main);
        ClapTrap(const std::string& name);
        ~ClapTrap();


        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        std::string  getName();
        int getHitPoint();
        int getEnargyPoint();
        int getAttackDamage();
        
};

#endif


