#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called " <<std::endl;
}

Brain::Brain(const Brain& main)
{
    std::cout << "Brain copy constrictor called" << std::endl;
    if(this != &main)
        *this = main;
}

Brain& Brain::operator=(const Brain& main)
{
    std::cout << "Brain copy assigment called" << std::endl;
    if(this != &main)
    { 
        for(int i = 0; i < 100;i++)
        {
            this->ideas[i] = main.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" <<std::endl;
}

 void Brain::setIdeas(int i,std::string replace )
 {
        ideas[i] = replace;
 }
std::string Brain::getIdeas(int i)const
{
    return ideas[i];
}