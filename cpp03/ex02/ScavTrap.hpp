#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap:public ClapTrap
{
    public:
        ScavTrap(const std::string& name);
        ScavTrap();
        ScavTrap(const ScavTrap &main);
        ScavTrap& operator=(const ScavTrap &main);
        void attack(const std::string& target);
        ~ScavTrap();
        void guardGate();
};

#endif