#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource():tableToLearn(new AMateria*[4])
{
    std::cout << "MateriaSource default constructor called "<<std::endl;
    for(int i = 0 ; i < 4 ; i++)
        tableToLearn[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& main):tableToLearn(NULL)
{
    std::cout << "MateriaSource copy constructor called"<<std::endl;
    if(&main != this)
        *this = main;
}

MateriaSource& MateriaSource::operator=(const  MateriaSource& main)
{
    std::cout << "MateriaSource copy assigment  called"<<std::endl;
    if(&main != this)
    {
        if(tableToLearn == NULL)
            tableToLearn = new AMateria*[4];
        for(int i = 0 ; i < 4 ; i++)
            tableToLearn[i] = main.tableToLearn[i];
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4;i++)
    {
        if(tableToLearn[i] != NULL)
            delete tableToLearn[i];
    }
    delete [] tableToLearn;
}

void MateriaSource::learnMateria(AMateria* main)
{
    if(!main)
        return;
    for(int i = 0;i < 4 ; i++)
    {
     
        if(tableToLearn[i] == NULL)
        {
            tableToLearn[i] = main;
            return;
        }
    }
    delete main;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0 ; i < 4 ; i++)
    {
        if(tableToLearn[i] != NULL)
        {
            if(tableToLearn[i]->getType() == type)
                return tableToLearn[i]->clone();
        }
    }
    return NULL;
}