#include "Character.hpp"

 Character::Character():name("none"),tableMateria(new AMateria*[4])
 {
    std::cout <<"character default constructor called"<<std::endl;
    saveAddress = NULL;
    for(int i = 0 ; i < 4 ;i++)
        tableMateria[i] = NULL;
 }

Character::Character(const std::string &name):name(name),tableMateria(new AMateria*[4])
{
    std::cout <<"character constructor called"<<std::endl;
    for(int i = 0 ; i < 4 ;i++)
        tableMateria[i] = NULL;
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
    std::cout << "Character destructor called"<<std::endl;
    for(int i = 0; i < 4 ;i++)
    {
        if(tableMateria[i] != NULL)
                delete tableMateria[i];
    }
    delete[] tableMateria;
    if(saveAddress)
    {
        for(int i = 0 ; saveAddress[i] != NULL;i++)
            delete saveAddress[i];
        delete[] saveAddress;
    }
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

int ft_strlen2d(AMateria **array)
{
    int i = 0;
    if(array == NULL)
        return 0;
    
    while(array[i])
        i++;
    return i;
}

AMateria** ft_join2d(AMateria **array ,AMateria *newOne)
{
    int i = 0;
    int len = ft_strlen2d(array);
    AMateria **newArray = new AMateria*[len + 2];
    if(array)
    {
        while( i < len)
        {
            newArray[i] = array[i]; 
            i++;
        }
    }
    newArray[i++] = newOne;
    newArray[i] = NULL;
    delete [] array;
    return newArray;
}
void Character::unequip(int idx)
{
    if(idx > 3  || idx < 0)
        return;
    if(tableMateria[idx]!= NULL)
    {
        saveAddress = ft_join2d(saveAddress,tableMateria[idx]);
        tableMateria[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if(idx > 3  || idx < 0 || this->tableMateria[idx] == NULL)
        return;
    tableMateria[idx]->use(target);
}