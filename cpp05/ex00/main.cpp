/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:07:43 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/02 15:19:42 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("hamza",1);
        a.decrement();
        std::cout << a << std::endl;
        a.increament();
        std::cout << a << std::endl;
        
    }
    catch(std::exception & e)
    {
        std::cout << "EXCEPTION : " << e.what()<<std::endl;
    }
    
}