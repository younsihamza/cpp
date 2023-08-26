/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:08:18 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 11:08:18 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
      public:
        WrongCat();
        WrongCat(const WrongCat& main);
        WrongCat& operator=(const WrongCat& main);
        ~WrongCat();
        void makeSound()const;
};

#endif