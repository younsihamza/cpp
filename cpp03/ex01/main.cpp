#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap a;
    ScavTrap b(a);
    
    a.guardGate();
    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());
    a.attack(b.getName());
    a.takeDamage(b.getAttackDamage());
    a.beRepaired(100);
}