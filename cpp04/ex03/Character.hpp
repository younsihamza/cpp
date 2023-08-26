/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:09:26 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 14:08:41 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"


class Character: public ICharacter
{
    private:
        std::string name;
        AMateria **tableMateria;
        AMateria **saveAddress;
    public:
        Character();
        Character(const std::string &name);
        Character(const Character &main);
        Character& operator=(const Character &main);
        ~Character();

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

};
#endif
