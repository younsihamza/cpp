/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:50:34 by hyounsi           #+#    #+#             */
/*   Updated: 2023/11/22 10:39:18 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(1000000);
    std::vector<int> a = {1, 2, 3, 4, 5};

    // Define iterators for the beginning and end of the array

    Span l(a.begin(),a.end());
    
    // std::cout << l.shortestSpan() << std::endl;
    // std::cout << l.longestSpan() << std::endl;
    return 0;
}