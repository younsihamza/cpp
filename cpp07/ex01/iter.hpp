/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:09:29 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/14 14:54:44 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T> 

void iter(T *p ,int len ,void (*play)(T))
{
    int i ;
    if(p == NULL)
        throw "Null pointer";
    for(i = 0; i < len ;i++)
        play(p[i]);
}

#endif