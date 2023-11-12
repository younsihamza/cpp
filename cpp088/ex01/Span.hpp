/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:52:41 by hyounsi           #+#    #+#             */
/*   Updated: 2023/11/12 15:52:41 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private:
        unsigned int size;
        std::vector<int> hold;
    public:
        Span();
        Span(unsigned int number);
        Span(const Span& main);
        Span& operator=(const Span& main);
        ~Span();

        void addNumber(int number);
        int longestSpan();
        int  shortestSpan();
        
        template<typename T >void addOne(T begin,T end)
        {
            hold.insert(hold.begin() + hold.size(),begin,end);
            if(size < hold.size())
                throw "span is full ";
        }
};

#endif