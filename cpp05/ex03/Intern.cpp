/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:09:04 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/04 11:06:08 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& main)
{*this = main;}

Intern& Intern::operator=(const Intern& main)
{
    (void)main;
    return *this;
}

Intern::~Intern()
{}

Form* Intern::makeForm(const std::string& FormName ,const std::string& target)
{
    int i;
    std::string NameForms[3] = {"shrubbery creation","robotomy request","presidential pardon"};
    Form* (Intern::*fp[3])(const std::string&) = {&Intern::cloneShrubbery,&Intern::cloneRoboto,&Intern::clonePresidential};
    for(i = 0 ; i < 3 ;i++)
    {
        if(FormName == NameForms[i])
        {
            std::cout << "Intern creates " <<  FormName <<" Form"<<std::endl;
            return  (this->*fp[i])(target);
        }
    }
    std::cout << FormName << ": not found !" <<std::endl;
    return NULL;
}


Form* Intern::cloneShrubbery(const std::string& target)
{
    return (new ShrubberyCreationForm(target));
}

Form* Intern::cloneRoboto(const std::string& target)
{
    return (new RobotomyRequestForm(target));
}

Form* Intern::clonePresidential(const std::string& target)
{
    return (new PresidentialPardonForm(target));
}