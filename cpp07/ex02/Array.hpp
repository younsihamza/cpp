/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:09:36 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/15 20:12:10 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T> class Array{
    private:
        int len;
        T *Ar;
        public:
    Array():Ar(NULL) {}
    Array(unsigned int n):len(n)
    {
        
        Ar = new T[n];
    }
    Array(const Array& main):len(main.len),Ar(NULL)
    {
        if(this != &main)
            *this = main;
    }
    
    Array& operator=(const Array& main)
    {
        if(this != &main)
        {
            if(Ar)
                delete[] Ar;
            Ar = new T[main.len];
            for(int i = 0;i < main.len ; i++)
                Ar[i] = main.Ar[i];
        }
        return *this;
    }
    
    T& operator[]( int index) const 
    {
        if(index >= len || index < 0)
            throw std::exception();
         return Ar[index];
    }
    ~Array()
    {
        if(Ar)
            delete[] Ar;
    }
     int size()const 
    {
        return len;
    }
};
#endif