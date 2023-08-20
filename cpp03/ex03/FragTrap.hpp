#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual  public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& main);
        FragTrap& operator=(const FragTrap& main);
        ~FragTrap();
        void highFivesGuys(void);
        void attack(const std::string& target);
};

#endif