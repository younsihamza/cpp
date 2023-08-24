#include "AMateria.hpp"

AMateria::AMateria(std::string const & type):type(type)
{
    std::cout << "AMateria destructor called " <<std::endl;
}

std::string const & AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "hamza younsi"<<target.getName() << std::endl;
}

AMateria::AMateria():type("none")
{
    std::cout <<"defaut constructor called"<<std::endl;
}

AMateria::AMateria(AMateria const& main)
{
    std::cout << "AMateria copy constructor called "<<std::endl;
    if(&main != this)
        *this = main;
}

AMateria& AMateria::operator=(const AMateria& main)
{
    std::cout << "AMateria copy assigment called "<<std::endl;
    if(this != &main)
        this->type = main.type;
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}