/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:08:36 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/04 18:49:10 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm",72,45),target("Home")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):Form("RobotomyRequestForm",72,45),target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& main):Form("RobotomyRequestForm",72,45)
{
    if(this  != &main)
        *this = main;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& main)
{
    if(this != &main)
    {
        this->setSign(main.getSign());
        this->target = main.target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(Bureaucrat const & executor)const 
{
    if (getSign() == false)
        throw NoSignedFormException();
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    std::cout << "robot  drilling noises" <<std::endl;
    srand(time(NULL));
    bool test = (rand()%2);
    if(test == true)
        std::cout << target<<" has been robotomized successfully "<<std::endl;
    else 
        std::cout << target<<" has been failed"<<std::endl;
}