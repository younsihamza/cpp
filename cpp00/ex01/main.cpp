/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:07:27 by hyounsi           #+#    #+#             */
/*   Updated: 2023/07/30 09:38:41 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"


int main(void)
{
    std::string Operation;
    PhoneBook Phone;
    while(1)
    {
        std::cout << "what the operation you want to do ? (ADD,SEARCH,EXIT) :";
        std::getline(std::cin,Operation);
        protect_getline();
        if(Operation == "ADD")
            Phone.ADD();
        else if(Operation == "SEARCH")
            Phone.SEARCH();
        else if(Operation == "EXIT")
        {
            std::cout << "programme EXIT !!" << std::endl;
            exit(0);
        }  
        else 
            std::cout <<"you must enter valide operation ." << std::endl << "oops!! ";
    }
} 
