#ifndef MATERIASOURSE_HPP
#define MATERIASOURSE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public  IMateriaSource
{
    private:
        AMateria **tableToLearn;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& main);
        MateriaSource& operator=(const  MateriaSource& main); 
        ~MateriaSource();

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif