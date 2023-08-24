#include "Character.hpp"

 Character::Character():name("none"),tableMateria(new AMateria*[4])
 {
    std::cout <<"character default constructor called"<<std::endl;
    for(int i = 0 ; i < 4 ;i++)
        tableMateria[i] = NULL;
 }

Character::Character(const std::string &name):name(name),tableMateria(new AMateria*[4])
{
    std::cout <<"character constructor called"<<std::endl;
}

Character::Character(const Character &main)
{
    std::cout << "character copy constructor called"<<std::endl;
    if(&main != this)
        *this = main;
}

Character& Character::operator=(const Character &main)
{
    std::cout << "character copy assigment called"<<std::endl;
    if(&main != this)
    {
        this->tableMateria = new AMateria*;
        for(int i = 0 ; i < 4 ; i++)
            this->tableMateria[i] = main.tableMateria[i];
    }
    return *this;
}

Character::~Character()
{
    delete[] tableMateria;
    std::cout << "Character destructor called"<<std::endl;
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    if ( m == NULL)
        return;
    for(int i = 0 ; i < 4 ;i++)
    {
        if(tableMateria[i] == NULL)
        {
            tableMateria[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if(idx > 3  || idx < 0)
        return;
    if(tableMateria[idx]!= NULL)
        tableMateria[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if(idx > 3  || idx < 0 || this->tableMateria[idx] == NULL)
        return;
    tableMateria[idx]->use(target);
}