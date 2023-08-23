#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& main);
        FragTrap& operator=(const FragTrap& main);
        ~FragTrap();
        void attack(const std::string& target);
        void highFivesGuys(void);
};
#endif