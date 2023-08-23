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
        virtual ~Animal();
        virtual void makeSound()const;
        std::string getType()const ;
};

#endif