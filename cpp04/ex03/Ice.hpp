/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:09:37 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 11:09:37 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice:public AMateria
{
    public:
        Ice();
        Ice(Ice& main);
        Ice& operator=(Ice& main);
        ~Ice();

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
