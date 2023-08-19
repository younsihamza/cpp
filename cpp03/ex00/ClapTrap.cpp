#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("anonumos"),HitPoint(10),EnargyPoint(10),AttackDamage(0)
{
    std::cout<<"ClapTrap default constructor called"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &main)
{
    std::cout << " ClapTrap copy constructor called " <<std::endl;
    if(&main != this)
        *this = main; 
}

ClapTrap::ClapTrap(std::string name):name(name),HitPoint(10),EnargyPoint(10),AttackDamage(0)
{
    std::cout << "ClapTrap Constructor called " <<std::endl;
}

void   ClapTrap::operator=(const ClapTrap &main)
{
    std::cout << "ClapTrap copy assigment constructor called " <<std::endl;
    if(&main != this)
    {
        this->name = main.name;
        this->HitPoint = main.HitPoint;
        this->EnargyPoint = main.HitPoint;
        this->AttackDamage = main.AttackDamage;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called " << std::endl;
}

void  ClapTrap::attack(const std::string& target)
{
    if(EnargyPoint > 0 && HitPoint > 0)
    {
        std::cout <<"ClapTrap "<< name <<" attacks " << target<<  " causing "<<  AttackDamage << "  points of damage " <<std::endl;
        EnargyPoint--;
    }
    else
        std::cout <<"ClapTrap "<< name <<"  could not attack " << target <<std::endl; 
}

void  ClapTrap::takeDamage(unsigned int amount)
{
    if(HitPoint > 0)
    {
        std::cout<<  "ClapTrap "<< name << "take damage of " << amount<<std::endl;
        if(amount > HitPoint)
            HitPoint = 0;
        else 
            HitPoint -=amount;
    }else 
        std::cout << "ClapTrap " << name << " is dead" << std::endl;
}

void  ClapTrap::beRepaired(unsigned int amount)
{
    if(EnargyPoint > 0)
    {
        std::cout << "ClapTrap " << name << "repaired " << amount  << std::endl; 
        EnargyPoint--;
        HitPoint += amount;
    }else
        std::cout << "ClapTrap " << name <<  " : i can't repaired my self " << std::endl;
}


std::string  ClapTrap::getName()
{
    return (name);
}
int ClapTrap::getHitPoint()
{
    return (HitPoint);
}
int ClapTrap::getEnargyPoint()
{
    return (EnargyPoint);
}
int ClapTrap::getAttackDamage()
{
    return (AttackDamage);
}

// First, you have to implement a class! How original!
// It will be called ClapTrap and will have the following private attributes initialized
// to the values specified in brackets:
// • Name, which is passed as parameter to a constructor
// • Hit points (10), represent the health of the ClapTrap
// • Energy points (10)
// • Attack damage (0)
// Add the following public member functions so the ClapTrap looks more realistic:
// • void attack(const std::string& target);
// • void takeDamage(unsigned int amount);
// • void beRepaired(unsigned int amount);
// When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
// When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing
// cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points
// or energy points left.