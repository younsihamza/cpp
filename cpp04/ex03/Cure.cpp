#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Cure costructor called "<<std::endl;
    type = "cure";
}

Cure::Cure(Cure& main)
{
    std::cout << "Cure copy assigment called" <<std::endl;
    if(&main != this)
        *this = main;
}

Cure& Cure::operator=(Cure& main)
{
    std::cout << "Cure copy assigment called" <<std::endl;
    if(&main != this)
        this->type = main.type;
    return (*this);
}

Cure::~Cure()
{
    std::cout<<"Cure destructor called" <<std::endl;
}

AMateria* Cure::clone() const
{
    AMateria* tmp = new Cure();
    return (tmp);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() <<"'s wounds *"<<std::endl;
}