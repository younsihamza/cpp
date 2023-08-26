/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:08:20 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 13:23:43 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called "<<std::endl;
    type = "none";
}

Animal::Animal(const Animal& main)
{
    std::cout << "Animal copy constructor  called "<<std::endl;
    if(&main != this)
        *this  = main; 
}

Animal& Animal::operator=(const Animal& main)
{
    std::cout << "copy assigment constructor called "<<std::endl;
    if(&main != this)
        this->type = main.type;
    return *this;
}

Animal::~Animal()
{
    std::cout <<"Animal destructor called " <<std::endl;
}

void Animal::makeSound()const
{
    std::cout << "animal make sound"<<std::endl;
}

std::string  Animal::getType()const 
{
    return type;
}