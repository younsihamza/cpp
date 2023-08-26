/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:08:33 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 11:08:33 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public Animal
{
    private:
        Brain *brain; 
    public:
        Cat();
        Cat(const Cat& main);
        Cat& operator=(const Cat& main);
        ~Cat();
        void makeSound()const;
};
#endif