/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:08:11 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 13:20:28 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called "<<std::endl;
    type = "none";
}

WrongAnimal::WrongAnimal(const WrongAnimal& main)
{
    std::cout << "WrongAnimal copy constructor  called "<<std::endl;
    if(&main != this)
        *this  = main; 
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& main)
{
    std::cout << "copy assigment constructor called "<<std::endl;
    if(&main != this)
        this->type = main.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout <<"WrongAnimal destructor called " <<std::endl;
}

void WrongAnimal::makeSound()const
{
    std::cout << "WrongAnimal make sound"<<std::endl;
}

std::string  WrongAnimal::getType()const 
{
    return type;
}