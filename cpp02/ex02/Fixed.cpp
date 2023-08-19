#include "Fixed.hpp"

const int  Fixed::fraction = 8;
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
    //std::cout <<"getRawBits member function called"<<std::endl;
    return (fixed_number);
}

void Fixed::setRawBits( int const raw )
{
    //std::cout <<"setRawBits member function called"<<std::endl;
    this->fixed_number = raw;
}

Fixed::Fixed(const int number){
    std::cout<<"intager constructor called"<<std::endl;
    fixed_number = number<<fraction;
}

Fixed::Fixed(const float number)
{
    std::cout<<"float constructor called"<<std::endl;
    fixed_number = roundf(number*(1<<fraction));
}

float Fixed::toFloat()const
{
    return((float)fixed_number/(1<<(fraction)));
}

int Fixed::toInt()const
{
    return(roundf(fixed_number>>fraction));
}

std::ostream& operator<<(std::ostream &out , const Fixed &main)
{
    out << main.toFloat();
    return out;
}


 //comparison operators 
        bool Fixed::operator==(const Fixed & main) const 
        {
            return(this->toFloat() == main.toFloat());
        }
        bool Fixed::operator<=(const Fixed & main)const
        {
            return(*this == main || *this < main );
        }
        bool Fixed::operator<(const Fixed & main)const
        {
            return(this->toFloat() < main.toFloat());
        }
        bool Fixed::operator>=(const Fixed & main)const
        {
             return(*this == main || *this > main );
        }
        bool Fixed::operator>(const Fixed & main)const
        {
            return(this->toFloat() > main.toFloat());
        }
        bool Fixed::operator!=(const Fixed &main)const
        {
            return(!(*this == main));
        }

        //arithmetic operator 
        Fixed Fixed::operator+(const Fixed & main)const
        {
            Fixed tmp(this->toFloat() + main.toFloat());
            return (tmp);
        }
        Fixed Fixed::operator-(const Fixed & main)const
        {
            Fixed tmp(this->toFloat() - main.toFloat());
            return (tmp);
        }
        Fixed Fixed::operator*(const Fixed & main)const
        {
            Fixed tmp(this->toFloat() * main.toFloat());
            return (tmp);
        }
        Fixed Fixed::operator/(const Fixed & main)const
        {
            Fixed tmp(this->toFloat() / main.toFloat());
            return (tmp);
        }
        //increment/decrement 
        Fixed Fixed::operator++()
        {
            this->fixed_number++;
            return *this;
        }
        Fixed Fixed::operator++(int)
        {
            Fixed tmp= *this;
            this->fixed_number++;
            return tmp;
        }
        Fixed Fixed::operator--()
        {
            this->fixed_number--;
            return *this;
        }
        Fixed Fixed::operator--(int)
        {
            Fixed tmp= *this;
            this->fixed_number--;
            return tmp;
        }

         Fixed& Fixed::min(Fixed &number1,Fixed &number2)
         {
            return(number1 > number2 ? number2:number1);
         }
          Fixed& Fixed::min(Fixed const&number1,Fixed const&number2)
         {
            return(number1 > number2 ? (Fixed&)number2:(Fixed&)number1);
         } 
         Fixed& Fixed::max(Fixed &number1,Fixed &number2)
         {
            return((number1 > number2) ? number1:number2);
         }

          Fixed& Fixed::max( Fixed const&number1, Fixed const&number2)
         {
            return((number1 > number2) ? (Fixed&)number1:(Fixed&)number2);
         } 