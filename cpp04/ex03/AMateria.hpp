/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:09:21 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 11:09:21 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:

        AMateria();
        AMateria(AMateria const& main);
        AMateria& operator=(const AMateria& main);
        virtual ~AMateria();

        AMateria(std::string const & type);
        std::string const & getType() const; 
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
