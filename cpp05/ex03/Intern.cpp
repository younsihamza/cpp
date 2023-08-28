#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& main)
{}

Intern& Intern::operator=(const Intern& main)
{}

Intern::~Intern()
{}

Form* Intern::makeForm(const std::string& FormName ,const std::string& target)
{
    int i;
    std::string NameForms[3] = {"ShrubberyCreationForm","RobotomyRequestForm","PresidentialPardonForm"};
    Form* (Intern::*fp[3])(const std::string&) = {&Intern::cloneShrubbery,&Intern::cloneRoboto,&Intern::clonePresidential};
    for(i = 0 ; i < 3 ;i++)
    {
        if(FormName == NameForms[i])
        {
            std::cout << "Intern creates " <<  FormName <<std::endl;
            return  (this->*fp[i])(target);
        }
    }
    std::cout << FormName << ": not found !" <<std::endl;
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