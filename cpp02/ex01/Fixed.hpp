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
};
    std::ostream& operator<<(std::ostream &out , const Fixed &main);
#endif