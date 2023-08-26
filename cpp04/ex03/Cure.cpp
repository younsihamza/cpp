/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:09:29 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 12:01:06 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria()
{
   // std::cout << "Cure costructor called "<<std::endl;
    type = "cure";
}

Cure::Cure(Cure& main):AMateria()
{
   // std::cout << "Cure copy assigment called" <<std::endl;
    if(&main != this)
        *this = main;
}

Cure& Cure::operator=(Cure& main)
{
    //std::cout << "Cure copy assigment called" <<std::endl;
    if(&main != this)
        this->type = main.type;
    return (*this);
}

Cure::~Cure()
{
    //std::cout<<"Cure destructor called" <<std::endl;
}

AMateria* Cure::clone() const
{
    AMateria* tmp = new Cure();
    return (tmp);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() <<"'s wounds *"<<std::endl;
}