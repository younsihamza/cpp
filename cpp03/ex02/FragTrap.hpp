#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& main);
        void operator=(const FragTrap& main);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif