#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"


class Character: public ICharacter
{
    private:
        std::string name;
        AMateria **tableMateria;
    public:
        Character();
        Character(const std::string &name);
        Character(const Character &main);
        Character& operator=(const Character &main);
        ~Character();

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

};

#endif
