/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:17:00 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/13 16:12:41 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <vector>



int main()
{
    int arr[5] = {3,1,5,6,1};
    std::vector<int> myvector(arr,arr + sizeof(arr)/sizeof(int));
    for(int i = 0; i < myvector.size() ; i++)
    {
        std::cout << myvector.at(i)<<std::endl;
    }

    try
    {

        easyfinf(myvector,1);
        std::cout << "find occurrence number"<<std::endl;

    }catch(const char * error)
    {
        std::cout << error <<std::endl;
    }
    for(int i = 0; i < myvector.size() ; i++)
    {
        std::cout << myvector.at(i)<<std::endl;
    }
    
}
