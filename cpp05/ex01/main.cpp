/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:08:06 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/02 15:18:23 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat a("hamza",10);
        Form u("younsi",10,30);
        u.beSigned(a);
        a.signForm(u);
        std::cout << u <<std::endl;
        std::cout << a << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << "EXCEPTION : " << e.what() << std::endl;
    }
}