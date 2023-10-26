#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T> void easyfind(T contianer , int number)
{
    if(find(contianer.begin(),contianer.end(),number) == contianer.end())
        throw "number not found !!";
}

#endif