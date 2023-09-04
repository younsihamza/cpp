/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:08:32 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/04 16:08:32 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"


int main(int argc ,char **argv)
{
    if(argc != 2)
    {
        std::cout << "you must enter one argument !!!" <<std::endl;
        return 0;
    }
    ScalarConverter::convert(argv[1]);

}