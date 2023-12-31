/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:09:31 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 11:09:31 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure:public AMateria
{
    public:
        Cure();
        Cure(Cure& main);
        Cure& operator=(Cure& main);
        ~Cure();

        void use(ICharacter& target);
        AMateria* clone() const;

};

#endif