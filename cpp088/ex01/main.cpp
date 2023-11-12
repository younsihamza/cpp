/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:52:48 by hyounsi           #+#    #+#             */
/*   Updated: 2023/11/12 15:52:48 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    
    try
    {
        Span sp = Span(10);
        std::vector<int>test;
        test.push_back(6);
        test.push_back(30);
        test.push_back(-1);
        test.push_back(7);

        sp.addOne(test.begin(),test.end());
        sp.addNumber(7);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

    }
    catch(const char * error)
    {
        std::cout << error <<std::endl;
    }
    return 0;
}