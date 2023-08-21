#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat:public Animal
{
    public:
        Cat();
        Cat(const Cat& main);
        Cat& operator=(const Cat& main);
        ~Cat();
        void makeSound()const;
};


#endif