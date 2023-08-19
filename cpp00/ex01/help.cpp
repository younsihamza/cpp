/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:07:24 by hyounsi           #+#    #+#             */
/*   Updated: 2023/07/31 11:34:09 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

std::string  edit_string(std::string str)
{
    int i;

    i = 0;
    std::string tmp;
    tmp = str;
    if(str.length() > 10)
        tmp = str.substr(0,9) + ".";
    return tmp;
}

int len_space(std::string str)
{
    int i;
    int len;
    
    i = 0;
    len = 0;
    
    while(i < (int)str.length())
    {
        if(str.at(i) > 126 || str.at(i) <=32)
            len++;
        i++;
    }
    return len;
}
int ft_isalpha(std::string str)
{
    int i;

    i = 0;
    while(i < (int)str.length())
    {
        if(std::isalpha(str.at(i)) == 0)
            return 1;
        i++;
    }
    return 0;
}

int ft_isdigit(std::string str)
{
    int i;

    i = 0;
    while(i < (int)str.length())
    {
        if(i == 0 && str[0] == '+')
            i++;
        else if(std::isdigit(str.at(i)) == 0)
            return 1;
        else
            i++;
    }
    return 0;
}

std::string ft_upper(std::string str)
{
    int i;

    i = 0;
    while (i < (int)str.length())
    {
        str[i] = std::toupper(str.at(i));
        i++;
    }
    return str;
}
void protect_getline()
{
    if(std::cin.eof() == true)
        exit(0);
}
