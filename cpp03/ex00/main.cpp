#include "ClapTrap.hpp"

int main()
{
    const std::string firstName = "hamza";
    const std::string LastName = "younsi";
    ClapTrap a = firstName;
    ClapTrap b; 

    a = firstName;
    b = LastName;



    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    

}