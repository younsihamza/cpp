#ifndef DIAMONDTRAP_HPP
#define  DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap,public FragTrap 
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap &main);
        DiamondTrap& operator=(DiamondTrap &main);
        ~DiamondTrap();
        void attack(const std::string& target);
        void whoAmI(); 
};

#endif