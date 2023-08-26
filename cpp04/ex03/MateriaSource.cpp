/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:09:49 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 12:07:28 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource():IMateriaSource(),tableToLearn(new AMateria*[4])
{
   // std::cout << "MateriaSource default constructor called "<<std::endl;
    for(int i = 0 ; i < 4 ; i++)
        tableToLearn[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& main):IMateriaSource(),tableToLearn(NULL)
{
    //std::cout << "MateriaSource copy constructor called"<<std::endl;
    if(&main != this)
        *this = main;
}

MateriaSource& MateriaSource::operator=(const  MateriaSource& main)
{
    //std::cout << "MateriaSource copy assigment  called"<<std::endl;
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
        if(tableToLearn[i] == main)
            return;
    }
    
    for(int i = 0;i < 4 ; i++)
    {
        if(tableToLearn[i] == NULL)
        {
            tableToLearn[i] = main;
            std::cout << "Materia source learn new materia type : "  << main->getType() <<std::endl;
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
            {
                std::cout << "Materia Source create new materia "<<type<<std::endl;
                return tableToLearn[i]->clone();
            }
        }
    }
     std::cout << "Materia Source did not learn  this type "<< type <<std::endl;
    return NULL;
}