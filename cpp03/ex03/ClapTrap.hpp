#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
class ClapTrap{
    protected:
        std::string name;
        int HitPoint;
        int EnargyPoint;
        int AttackDamage;
    public:
        ClapTrap();
        ClapTrap(const ClapTrap &main);
        ClapTrap&  operator=(const ClapTrap &main);
        ClapTrap(const std::string& name);
        virtual ~ClapTrap();


        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string  getName();
        int getHitPoint();
        int getEnargyPoint();
        int getAttackDamage();
        
};

#endif


