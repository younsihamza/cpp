/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:09:09 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 17:55:43 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal(),brain(NULL)
{
    std::cout<<"Dog default constructor called "<<std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog& main):Animal(),brain(NULL)
{
    std::cout << " copy  constractor called  " <<std::endl;
    if(this != &main)
        *this = main;
}

Dog& Dog::operator=(const Dog& main)
{
    std::cout << "copy assigment constructor called " <<std::endl;
     if(this!=&main)
    {
        type = main.type;
        if(this->brain == NULL)
            this->brain = new Brain();
        *(this->brain) = *(main.brain);
    }
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called  " <<std::endl;
}

void Dog::makeSound()const
{
    std::cout << "dog sound"<<std::endl;
}