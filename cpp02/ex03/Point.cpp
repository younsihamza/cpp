/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:53:05 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/17 14:53:05 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

 Point::Point()
 {
    std::cout <<"Point defaul constructor called "<<std::endl;
 }
Point::Point(const float n1,const float n2):x(n1),y(n2)
{
    std::cout<<"Point constructor called" <<std::endl;
}
Point::Point(Point &main)
{
    std::cout << "Point copy constructor called "<<std::endl;
    if(&main != this)
        *this  = main;
}
Point& Point::operator=(Point& main)
{
    std::cout << "Point copy assgment  called "<<std::endl;
    if(&main != this)
    {
        (Fixed&)this->x = main.getX();
        (Fixed&)this->y = main.getY();
    }
    return *this;
}

 const Fixed& Point::getX() const 
 {
    return x;
 }
const Fixed& Point::getY()const 
{
    return y;
}

Point::~Point()
{
    std::cout <<"Point destructor called " <<std::endl;
}