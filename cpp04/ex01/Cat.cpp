/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:08:31 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 17:56:39 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal(),brain(NULL)
{
    std::cout<<"Cat default constructor called "<<std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat& main):Animal(),brain(NULL)
{
    std::cout << "Cat copy  constractor called  " <<std::endl;
    if(this != &main)
        *this = main;
}

Cat& Cat::operator=(const Cat& main)
{
    std::cout << "Cat copy assigment constructor called " <<std::endl;
    if(this!=&main)
    {
        type = main.type;
        if(this->brain == NULL)
            this->brain = new Brain();
        *(this->brain) = *(main.brain);
    }
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called  " <<std::endl;
}

void Cat::makeSound()const
{
    std::cout << "Cat sound"<<std::endl;
}