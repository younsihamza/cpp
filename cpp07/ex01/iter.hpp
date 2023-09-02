#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T> 

void iter(T *p ,int len ,void (*play)(T const &))
{
    int i ;
    if(p == NULL)
        throw "Null pointer";
    for(i = 0; i < len ;i++)
        play(p[i]);
}

#endif