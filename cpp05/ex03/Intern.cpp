#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& main)
{}

Intern& Intern::operator=(const Intern& main)
{}

Intern::~Intern()
{}

Form* makeForm(const std::string& FormName ,const std::string& target)
{
    std::string NameForms[3] = {"ShrubberyCreationForm","RobotomyRequestForm","PresidentialPardonForm"};
    Form* forms[3] = {};
}