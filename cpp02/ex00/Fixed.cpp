/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:03:56 by hyounsi           #+#    #+#             */
/*   Updated: 2023/11/17 18:45:39 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
const int Fixed::fraction = 8;
Fixed::Fixed():fixed_number(0)
{
    std::cout << "default constructor called "<<std::endl;
    
}

Fixed::~Fixed()
{
    std::cout<<"destructor called" <<std::endl;
}

Fixed::Fixed(const Fixed &main)
{
    std::cout << "copy constructor called" <<std::endl;
    if(&main != this)
        *this = main;
}

Fixed& Fixed::operator=(const Fixed &main)
{
    std::cout<<"copy assigment constructor calle " <<std::endl;
    if(&main != this)
        fixed_number = main.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout <<"getRawBits member function called"<<std::endl;
    return (fixed_number);
}

void Fixed::setRawBits( int const raw )
{
    std::cout <<"setRawBits member function called"<<std::endl;
    this->fixed_number = raw;
}