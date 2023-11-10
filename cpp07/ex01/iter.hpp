/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:09:29 by hyounsi           #+#    #+#             */
/*   Updated: 2023/11/10 10:07:13 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T ,typename U> 
void iter(T p ,int len ,void ((*play)(U)))
{
    int i ;
    if(p == NULL)
        return;
    for(i = 0; i < len ;i++)
        play(p[i]);
}

#endif