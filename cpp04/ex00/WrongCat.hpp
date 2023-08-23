#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
      public:
        WrongCat();
        WrongCat(const WrongCat& main);
        WrongCat& operator=(const WrongCat& main);
        ~WrongCat();
        void makeSound()const;
};

#endif