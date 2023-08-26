/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:08:54 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 13:17:26 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal& main);
        Animal& operator=(const Animal& main);
        virtual void makeSound() const  = 0;
        std::string getType()const ;
        virtual ~Animal();
};

#endif