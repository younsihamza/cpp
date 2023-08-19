/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:02:28 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/13 16:52:49 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class Zombie {
    private:
        std::string name;
    public:
        ~Zombie();
        void announce( void );
        Zombie(std::string name);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif