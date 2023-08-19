/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:53:10 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/17 14:53:10 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <fstream>
#include <iostream>
bool bsp( Point const a, Point const b, Point const c, Point const point);
int main( void ) {
    Point a(0,0);
    Point b(10,30);
    Point c(20,0);
    Point point(10,15);
    if(bsp(a,b,c,point)==true)
        std::cout <<"true,point inside tringle"<<std::endl;
    else 
        std::cout<<"false,point outside tringle"<<std::endl;
return 0;
}

