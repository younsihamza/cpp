/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:48:22 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/13 16:48:22 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc ,char **argv)
{
    if(argc != 2)
    {
        std::cout << "you must enter one argument"<<std::endl;
        return 0;
    }
    Harl hamza;

    hamza.complain(argv[1]);
}