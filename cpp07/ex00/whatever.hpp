/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:09:25 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/15 18:55:54 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>
template <typename T >

void  swap(T &a , T &b)
{
    T tmp;
    tmp  = a;
    a = b;
    b = tmp;
}
template <typename T >  T& min( T &a , T &b)
{
    return ((a < b)?  a: b);
}
template <typename T >       T& max( T &a ,T &b)
{
    return ((a > b)?  a: b);
}

#endif