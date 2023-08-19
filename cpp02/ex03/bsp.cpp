/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:53:20 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/17 14:53:20 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
float area(const Point& a,const Point& b,const Point& c)
{
    Fixed ar =(a.getX()*(b.getY() - c.getY()) + b.getX()*(c.getY() - a.getY()) + c.getX()*(a.getY()-b.getY()));
    float r = ar.toFloat()/2.0;
    if(r >= 0)
        return r;
    return -r;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float A = area(a,b,c);
    float t1 = area(point,b,c);
    float t2 = area(a,point,c);
    float t3 = area(a,b,point);
    if(t1 == 0 || t2 == 0 || t3 == 0)
        return false;
    return(A ==(float) (t1 + t2 +t3));
}