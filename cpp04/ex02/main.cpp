/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:09:14 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 11:09:14 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
    Animal *array[100];
    int i  = 0;
    for(i = 0;i < 50;i++)
        array[i] = new Dog();
    for(;i < 100;i++)
        array[i] = new Cat();
    
    for(i = 0; i < 100 ;i++)
        delete array[i];
}