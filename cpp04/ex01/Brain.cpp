/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:08:26 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 11:08:26 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
            this->ideas[i] = main.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" <<std::endl;
}

 void Brain::setIdeas(int i,std::string const & replace )
 {
        ideas[i] = replace;
 }
std::string const &  Brain::getIdeas(int i)const
{
    return ideas[i];
}