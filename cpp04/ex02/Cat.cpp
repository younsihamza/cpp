#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat default constructor called "<<std::endl;
    type = "Cat";
    brain = new Brain();
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
    {
        type = main.type;
        this->brain = new Brain();
        for(int i = 0; i < 100 ;i++)
            brain->setIdeas(i,main.brain->getIdeas(i));
    }
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called  " <<std::endl;
}

void Cat::makeSound()const
{
    std::cout << "Cat sound"<<std::endl;
}