/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:08:01 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/04 10:48:29 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form():name("neno"),sign(false),gradeToSign(50),gradeToExecute(20)
{

}

Form::Form(const std::string& name, int gradeToSign ,int gradeToExecute):name(name),sign(false),gradeToSign(gradeToSign),gradeToExecute(gradeToExecute)
{
    if(gradeToExecute < 1 || gradeToSign < 1)
        throw GradeTooHighException();
    if(gradeToExecute > 150 || gradeToSign > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& main):name(main.name),gradeToSign(main.gradeToSign),gradeToExecute(main.gradeToExecute)
{
    if(&main != this)
        *this = main;
}

Form& Form::operator=(const Form& main)
{
    if(&main != this)
        this->sign = main.sign;
    return *this;
}
Form::~Form()
{

}

void Form::beSigned(const Bureaucrat& B)
{
    if(B.getGrade() > gradeToSign)
        throw GradeTooLowException();
    sign = true;
}


const std::string& Form::getName()const 
{
    return name;
}

bool Form::getSign()const
{
    return sign;
}

int Form::getGradeToSign()const
{
    return gradeToSign;
}

int Form::getGradeToExecute()const
{
    return gradeToExecute;
}

const char * Form::GradeTooHighException::what() const throw()
{
    return "form grade too high ";
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "form grade too low ";
}

std::ostream& operator<<(std::ostream& out , const Form& main)
{
    out << main.getName() <<", grade to sign is  " << main.getGradeToSign() << " grade to execute form is "<< main.getGradeToExecute() << " form is sign : "<< main.getGradeToSign()<< ".";
    return out;
}