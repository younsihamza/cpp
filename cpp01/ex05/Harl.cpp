/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:48:01 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/13 16:48:01 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() 
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" <<std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() 
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int i;
    std::string tablelevel[4] = {"DEBUG","INFO","WARNING", "ERROR"};
    void  (Harl::*fp[])()  = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    i = 0;
    while(i < 4)
    {
        if(level == tablelevel[i])
        {
            (this->*fp[i])();
            return;
        }
        i++;
    }
    std::cout << "[ Probably complaining about insignificant problems ]"<<std::endl;
}

Harl::Harl()
{
   
}

Harl::~Harl()
{
    
}