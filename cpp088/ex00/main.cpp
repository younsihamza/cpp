/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:52:50 by hyounsi           #+#    #+#             */
/*   Updated: 2023/11/12 15:52:50 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> table;
    try
    {
        table.push_back(10);
        table.push_back(6);
        table.push_back(11);
        easyfind(table,6);
    }catch(const char * text)
    {
        std::cout << text << std::endl;
    }
}