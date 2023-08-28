#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm",25,5),target("none")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):Form("PresidentialPardonForm",25,5),target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& main):Form("PresidentialPardonForm",25,5),target(main.target)
{
    if(this != &main)
        *this = main;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& main)
{
    if(this != &main)
        this->setSign(main.getSign());
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(Bureaucrat const & executor)const
{
    if(!getSign())
        throw NoSignedFormException();
    if(executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
    std::cout << target <<" has been pardoned by Zaphod Beeblebrox"<< std::endl;
}
