#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

class Dog:public Animal
{
    private:
        Brain *brain; 
    public:
        Dog();
        Dog(const Dog& main);
        Dog& operator=(const Dog& main);
        ~Dog();
        void makeSound()const;
};

#endif