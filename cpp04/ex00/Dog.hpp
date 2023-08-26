/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:08:06 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 11:08:06 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog:public Animal
{
    public:
        Dog();
        Dog(const Dog& main);
        Dog& operator=(const Dog& main);
        ~Dog();
        void makeSound()const;
};

#endif