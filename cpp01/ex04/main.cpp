/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:14:04 by hyounsi           #+#    #+#             */
/*   Updated: 2023/07/22 12:46:18 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filework.hpp"

int main(int argc ,char **argv)
{
    if(argc != 4)
    {
        std::cout << "you must enter three argumant " <<std::endl;
        return (1);
    }
    fileWork(argv);
}