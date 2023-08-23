/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:33:10 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/21 14:19:47 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("anonymous"),HitPoint(10),EnargyPoint(10),AttackDamage(0)
{
    std::cout<<"ClapTrap default constructor called"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &main)
{
    std::cout << " ClapTrap copy constructor called " <<std::endl;
    if(&main != this)
        *this = main;
}

ClapTrap::ClapTrap(const std::string& name):name(name),HitPoint(10),EnargyPoint(10),AttackDamage(0)
{
    std::cout << "ClapTrap Constructor called " <<std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap &main)
{
    std::cout << "ClapTrap copy assigment constructor called " <<std::endl;
    if(&main != this)
    {
        this->name = main.name;
        this->HitPoint = main.HitPoint;
        this->EnargyPoint = main.HitPoint;
        this->AttackDamage = main.AttackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called " << std::endl;
}

void  ClapTrap::attack(const std::string& target)
{
    if(EnargyPoint > 0 && HitPoint > 0)
    {
        std::cout <<"ClapTrap "<< name <<" attacks " << target <<  " causing "<<  AttackDamage << "  points of damage " <<std::endl;
        EnargyPoint--;
    }
    else
        std::cout <<"ClapTrap "<< name <<"  could not attack " << target <<std::endl; 
}

void  ClapTrap::takeDamage(unsigned int amount)
{
    if(HitPoint > 0)
    {
        std::cout<<  "ClapTrap "<< name << " take damage of " << amount<<std::endl;
        if(amount > (unsigned int)HitPoint)
            HitPoint = 0;
        else 
            HitPoint -=amount;
    }else 
        std::cout << "ClapTrap " << name << " is dead" << std::endl;
}

void  ClapTrap::beRepaired(unsigned int amount)
{
    if(EnargyPoint > 0)
    {
        std::cout << "ClapTrap " << name << " repaired " << amount  << std::endl; 
        EnargyPoint--;
        HitPoint += amount;
    }else
        std::cout << "ClapTrap " << name <<  " : i can't repaired my self " << std::endl;
}


std::string  ClapTrap::getName()
{
    return (name);
}
int ClapTrap::getHitPoint()
{
    return (HitPoint);
}
int ClapTrap::getEnargyPoint()
{
    return (EnargyPoint);
}
int ClapTrap::getAttackDamage()
{
    return (AttackDamage);
}