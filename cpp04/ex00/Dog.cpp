/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:08:03 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 11:08:03 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal()
{
    std::cout<<"Dog default constructor called "<<std::endl;
    type = "Dog";
}

Dog::Dog(const Dog& main):Animal()
{
    std::cout << " copy  constractor called  " <<std::endl;
    if(this != &main)
        *this = main;
}

Dog& Dog::operator=(const Dog& main)
{
    std::cout << "copy assigment constructor called " <<std::endl;
    if(this!=&main)
        this->type = main.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called  " <<std::endl;
}

void Dog::makeSound()const
{
    std::cout << "dog sound"<<std::endl;
}