#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    ScavTrap *a = new DiamondTrap("hamza");
    a->attack("younsi");
    delete a;
}