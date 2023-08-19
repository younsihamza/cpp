/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:07:09 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/01 10:13:15 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string ft_upper(std::string str)
{
    int i;

    i = 0;
    while (i < (int)str.length())
    {
        str.at(i) = std::toupper(str.at(i));
        i++;
    }
    return str;
}

int main(int argc, char **argv)
{
    int i;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    i = 1;
    while (argv[i])
    {
        std::cout << ft_upper(argv[i]);
        i++;
    }
    std::cout << std::endl;
}