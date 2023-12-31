#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("hamza");
    ScavTrap b("younsi");
    
    a.guardGate();
    while(1)
    {
        //a attacks b
        a.attack(b.getName());
        b.takeDamage(a.getAttackDamage());
        //b attacks a
        b.attack(a.getName());
        a.takeDamage(b.getAttackDamage());
       //a attacks b
        a.attack(b.getName());
        b.takeDamage(a.getAttackDamage());
        if(a.getHitPoint() == 0)
            a.beRepaired(100);
        if(b.getHitPoint()== 0)
            b.beRepaired(100);
        if(a.getHitPoint() == 0 || b.getHitPoint()== 0)
            break;
    }
}