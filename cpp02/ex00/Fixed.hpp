/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:03:58 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/17 10:04:32 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed
{
    private:
        int fixed_number;
        static const int  fraction;
    public:
        Fixed();
        Fixed(const Fixed &main);
        Fixed& operator=(const Fixed& main);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif