#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
    protected:
        std::string type;
    public:

        AMateria();
        AMateria(AMateria const& main);
        AMateria& operator=(const AMateria& main);
        ~AMateria();

        AMateria(std::string const & type);
        std::string const & getType() const; 
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};
#endif