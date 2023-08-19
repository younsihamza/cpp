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