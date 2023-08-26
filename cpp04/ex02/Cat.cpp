/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:09:01 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 11:09:01 by hyounsi          ###   ########.fr       */
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
        for(int i = 0; i < 100 ;i++)
            this->brain->setIdeas(i,main.brain->getIdeas(i));
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