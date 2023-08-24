#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure:public AMateria
{
    public:
        Cure();
        Cure(Cure& main);
        Cure& operator=(Cure& main);
        ~Cure();

        void use(ICharacter& target);
        AMateria* clone() const;

};

#endif