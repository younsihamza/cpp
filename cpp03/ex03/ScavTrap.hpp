#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap();
        ScavTrap(const ScavTrap &main);
        void operator=(const ScavTrap &main);
        void attack(std::string name);
        ~ScavTrap();
        void guardGate();
};

#endif