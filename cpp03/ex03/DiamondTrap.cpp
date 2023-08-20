#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
    std::cout<< "DiamondTrap default constructor called "<<std::endl;
    EnargyPoint = 50;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"),name(name)
{
    std::cout << "DiamondTrap constructor called " <<std::endl;
    this->name = name;
    EnargyPoint = 50;
}

DiamondTrap::DiamondTrap(DiamondTrap &main)
{
    std::cout<<"DaimondTrap DiamondTrap copy constructor " <<std::endl;
    if(this != &main)
        *this = main; 
}

 DiamondTrap&  DiamondTrap::operator=(DiamondTrap &main)
{
    std::cout << "DaimondTrap copy constructor assigment" <<std::endl;
    if(this != &main)
    {
        this->AttackDamage = main.AttackDamage;
        this->EnargyPoint = main.HitPoint;
        this->AttackDamage = main.AttackDamage;
        this->name = main.name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << " DaimondTrap destructor called "<<std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
   ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout<< "diamondTrap name:" << name <<" from " << (ClapTrap::name) << std::endl;
} 


      