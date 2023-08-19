/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:53:13 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/17 14:53:13 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixed_number;
        static  const int  fraction;
    public: 
        Fixed();
        Fixed(const Fixed &main);
        Fixed& operator=(const Fixed& main);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );

        Fixed(const int number);
        Fixed(const float number);
        float toFloat()const;
        int toInt()const;
        //comparison operators 
        bool operator==(const Fixed & main)const;
        bool operator<=(const Fixed & main)const;
        bool operator<(const Fixed & main)const;
        bool operator>=(const Fixed & main)const;
        bool operator>(const Fixed & main)const;
        bool operator!=(const Fixed & main)const;
        //arithmetic operator 
        Fixed operator+(const Fixed & main)const;
        Fixed operator-(const Fixed & main)const;
        Fixed operator*(const Fixed & main)const;
        Fixed operator/(const Fixed & main)const;
        //increment/decrement 
        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);
        // max min value
        static Fixed& min(Fixed &number1,Fixed &number2); 
        static Fixed& min(Fixed const&number1,Fixed const&number2); 
        static Fixed& max(Fixed &number1,Fixed &number2);
        static Fixed& max(Fixed const&number1,Fixed const&number2);
};
    std::ostream& operator<<(std::ostream &out , const Fixed &main);
#endif