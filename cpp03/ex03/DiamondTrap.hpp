#ifndef DIAMONDTRAP_HPP
#define  DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap ,public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap &main);
        void operator=(DiamondTrap &main);
        ~DiamondTrap();
};

#endif