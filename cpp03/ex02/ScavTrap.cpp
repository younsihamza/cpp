#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name):ClapTrap(name)
{
    std::cout << "ScavTrap Constructor called" <<std::endl;
    HitPoint  = 100;
    EnargyPoint = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << "ScavTrap default constructor called " <<std::endl;
    HitPoint  = 100;
    EnargyPoint = 50;
    AttackDamage = 20;
}

void ScavTrap::attack(const std::string& target)
{
    if(EnargyPoint > 0 && HitPoint > 0)
    {
        std::cout << "ScavTrap " << name << " attacks " << target << " causing "<<  AttackDamage << "  points of damage " <<std::endl;
        EnargyPoint--;
    }else
        std::cout << "ScavTrap " << name << " couldn't attacks " << target << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called " <<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &main)
{
    std::cout<< "ScavTrap copy constructor called " << std::endl;
    if(&main != this)
        *this = main; 
}


ScavTrap& ScavTrap::operator=(const ScavTrap &main)
{
    std::cout<< "ScavTrap copy assigment constructor called " << std::endl;
    if(&main != this)
    {
        this->name = main.name;
        this->HitPoint = main.HitPoint;
        this->EnargyPoint = main.HitPoint;
        this->AttackDamage = main.AttackDamage;
    }
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout<< "ScavTrap " <<name << "  in gatekeeper mode"<< std::endl; 
}