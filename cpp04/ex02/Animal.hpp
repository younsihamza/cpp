#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(Animal& main);
        Animal& operator=(Animal& main);
        virtual void makeSound() const  = 0;
        std::string getType()const ;
        virtual ~Animal();
};

#endif