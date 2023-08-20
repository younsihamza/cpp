#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap():ClapTrap()
{
    std::cout<< "diamondtrap default constructor called "<<std::endl;
    EnargyPoint = ScavTrap::EnargyPoint;
    HitPoint = FragTrap::HitPoint;
    AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name+"_clap_name")
{
    std::cout << "diamondtrap constructor called " <<std::endl;
    this->name = name;
    EnargyPoint = ScavTrap::EnargyPoint;
    HitPoint = FragTrap::HitPoint;
    AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap &main)
{
    std::cout<<"DaimondTrap DiamondTrap copy constructor " <<std::endl;
    if(this != &main)
        *this = main; 
}

void DiamondTrap::operator=(DiamondTrap &main)
{
    std::cout << "DaimondTrap copy constructor assigment" <<std::endl;
    if(this != &main)
    {
        this->AttackDamage = main.AttackDamage;
        this->EnargyPoint = main.HitPoint;
        this->AttackDamage = main.AttackDamage;
        this->name = main.name;
    }
}

DiamondTrap::~DiamondTrap()
{
    std::cout << " DaimondTrap destructor called "<<std::endl;
}

void DiamondTrap::attack(std::string target)
{
    ScavTrap::attack(target)
}