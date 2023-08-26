/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:07:58 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 13:16:31 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal()
{
    std::cout<<"Cat default constructor called "<<std::endl;
    type = "Cat";
}

Cat::Cat(const Cat& main):Animal()
{
    std::cout << "Cat copy  constractor called  " <<std::endl;
    if(this != &main)
        *this = main;
}

Cat& Cat::operator=(const Cat& main)
{
    std::cout << "Cat copy assigment constructor called " <<std::endl;
    if(this!=&main)
        this->type = main.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called  " <<std::endl;
}

void Cat::makeSound()const
{
    std::cout << "Cat sound"<<std::endl;
}