/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:09:34 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 12:01:32 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria()
{
    //std::cout << "Ice costructor called "<<std::endl;
    type = "ice";
}

Ice::Ice(Ice& main):AMateria()
{
    //std::cout << "Ice copy assigment called" <<std::endl;
    if(&main != this)
        *this = main;
}

Ice& Ice::operator=(Ice& main)
{
    //std::cout << "Ice copy assigment called" <<std::endl;
    if(&main != this)
        this->type = main.type;
    return (*this);
}

Ice::~Ice()
{
   // std::cout<<"Ice destructor called" <<std::endl;
}

AMateria* Ice::clone() const
{
    AMateria* tmp = new Ice();
    return (tmp);
}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}