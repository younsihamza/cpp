#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap *a = new DiamondTrap("hamza");
    a->attack("younsi");
    a->whoAmI();
}