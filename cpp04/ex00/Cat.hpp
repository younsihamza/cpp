/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:08:00 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 11:08:00 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat:public Animal
{
    public:
        Cat();
        Cat(const Cat& main);
        Cat& operator=(const Cat& main);
        ~Cat();
        void makeSound()const;
};


#endif