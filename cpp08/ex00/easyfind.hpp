#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>

template <typename T> void easyfinf( T& arr ,int number)
{
    if( std::find(arr.begin(),arr.end(),number) == arr.end())
        throw "ERROR: occurrnce not found !!";
   std::sort(arr.begin(),arr.end()); 
}
 #endif