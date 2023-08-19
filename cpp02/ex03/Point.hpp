/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:53:03 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/17 14:53:03 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"


class Point{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const float n1,const float n2);
        Point(Point &main);
        Point& operator=(Point& main);
        const Fixed& getX()const ;
        const Fixed& getY()const ;
        ~Point();
};

#endif


