#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    std::cout << "FragTrap default constructor called" <<std::endl;
    HitPoint  = 100;
    EnargyPoint = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout << "FragTrap  constructor called" <<std::endl;
    HitPoint  = 100;
    EnargyPoint = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& main)
{
    std::cout<< "FragTrap copy  constructor called " << std::endl;
    if(&main != this)
        *this = main;
}

FragTrap& FragTrap::operator=(const FragTrap& main)
{
     std::cout<< "FragTrap copy assigment constructor called " << std::endl;
    if(&main != this)
    {
        this->name = main.name;
        this->HitPoint = main.HitPoint;
        this->EnargyPoint = main.HitPoint;
        this->AttackDamage = main.AttackDamage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called"<< std::endl;
}  

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap "<< name << " high fives Guys"<<std::endl;
}

 void FragTrap::attack(const std::string& target)
 {
    if(EnargyPoint > 0 && HitPoint > 0)
    {
        std::cout << "FragTrap " << name << " attacks " << target << " causing "<<  AttackDamage << "  points of damage " <<std::endl;
        EnargyPoint--;
    }else
        std::cout << "FragTrap " << name << "couldn't attcks " << target << std::endl;
 }