#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public Animal
{
    private:
        Brain *brain; 
    public:
        Cat();
        Cat(const Cat& main);
        Cat& operator=(const Cat& main);
        ~Cat();
        void makeSound()const;
};
#endif