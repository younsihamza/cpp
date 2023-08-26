/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:08:16 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 11:08:16 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<<"WrongCat default constructor called "<<std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& main)
{
    std::cout << "WrongCat copy  constractor called  " <<std::endl;
    if(this != &main)
        *this = main;
}

WrongCat& WrongCat::operator=(const WrongCat& main)
{
    std::cout << "WrongCat copy assigment constructor called " <<std::endl;
    if(this!=&main)
        this->type = main.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called  " <<std::endl;
}

void WrongCat::makeSound()const
{
    std::cout << "WrongCat sound"<<std::endl;
}