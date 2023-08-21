#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat default constructor called "<<std::endl;
    type = "Cat";
}

Cat::Cat(const Cat& main)
{
    std::cout << "Cat copy  constractor called  " <<std::endl;
    if(this != &main)
        *this = main;
}

Cat& Cat::operator=(const Cat& main)
{
    std::cout << "Cat copy assigment constructor called " <<std::endl;
    if(this!=&main)
        this->type = main.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called  " <<std::endl;
}

void Cat::makeSound()const
{
    std::cout << "Cat sound"<<std::endl;
}