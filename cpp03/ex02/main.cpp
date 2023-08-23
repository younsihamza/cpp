#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    //ScavTrap hamza;
    ClapTrap *a = new FragTrap;
    FragTrap b("younsi");

    //hamza.guardGate();
    while(1)
    {
        //a attacks b
        a->attack(b.getName());
        b.takeDamage(a->getAttackDamage());
        //b attacks a
        b.attack(a->getName());
        a->takeDamage(b.getAttackDamage());
       //a attacks b
        a->attack(b.getName());
        b.takeDamage(a->getAttackDamage());
        if(a->getHitPoint() == 0)
            a->beRepaired(100);
        if(b.getHitPoint() == 0)
            b.beRepaired(100);
        if(a->getHitPoint() == 0 || b.getHitPoint()== 0)
            break;
    }
    // if(a->getHitPoint() != 0)
    //     a->highFivesGuys();
    // else if(b.getHitPoint() != 0)
    //     b.highFivesGuys();
     delete a;

}