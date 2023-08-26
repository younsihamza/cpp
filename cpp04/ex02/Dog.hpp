/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:09:11 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 11:09:11 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

class Dog:public Animal
{
    private:
        Brain *brain; 
    public:
        Dog();
        Dog(const Dog& main);
        Dog& operator=(const Dog& main);
        ~Dog();
        void makeSound()const;
};

#endif