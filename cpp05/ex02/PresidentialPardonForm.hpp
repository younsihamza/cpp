#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string& target);
        PresidentialPardonForm(const PresidentialPardonForm& main);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& main);
        ~PresidentialPardonForm();

        void execute(Bureaucrat const & executor)const ;
};

#endif


