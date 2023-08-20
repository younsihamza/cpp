#ifndef AMINAL_HPP
#define AMINAL_HPP

#include <iostream>

class Animal 
{
    private:
        std::string type;
    public:
        Animal();
        Aminal(std::string type);
        Animal(Animal& main);
        Animal& operator=(Animal& main);
        ~Animal();

};

#endif