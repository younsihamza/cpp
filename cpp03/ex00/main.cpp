#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("hamza");
    ClapTrap b("younsi"); 

    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());
    b.attack(a.getName());
    a.takeDamage(b.getAttackDamage());
    a.beRepaired(100);
}