/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:08:31 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/02 14:08:31 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm",25,5),target("none")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):Form("PresidentialPardonForm",25,5),target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& main):Form("PresidentialPardonForm",25,5)
{
    if(this != &main)
        *this = main;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& main)
{
    if(this != &main)
    {
        this->setSign(main.getSign());
        this->target = main.target;
    }
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
