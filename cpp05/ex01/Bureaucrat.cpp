/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:07:56 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/04 10:45:14 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("none"),grade(1)
{

}

Bureaucrat::Bureaucrat(const std::string& name , int grade):name(name)
{
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if(grade > 150 )
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& main):name(main.name)
{
    if(&main != this)
        *this = main;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& main)
{
    if(&main != this)
        this->grade = main.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{

}

const std::string& Bureaucrat::getName()const 
{
    return name;
}

int Bureaucrat::getGrade()const
{
    return grade;
}

void Bureaucrat::increament()
{
    if(grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void Bureaucrat::decrement()
{
    if(grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

void Bureaucrat::signForm(Form& frm)
{
    try
    {
        if(grade > frm.getGradeToSign())
            throw GradeTooLowException();
        if(frm.getSign() == true)
        {
             std::cout << name <<" couldn't sign "<<frm.getName()<< " because already sign"<<std::endl;
            return ;
        }
        frm.beSigned(*this);
        std::cout << name << " signed " << frm.getName() <<std::endl;
    }catch(std::exception &e)
    {
        std::cout << name <<" couldn't sign "<<frm.getName()<< " because "<<e.what()<<std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what()const throw()
{
    return "Bureaucrat grade too high";
}

const char* Bureaucrat::GradeTooLowException::what()const throw()
{
    return "Bureaucrat grade too Low";
}

std::ostream& operator<<(std::ostream& out , const Bureaucrat& main)
{
    out << main.getName() <<", bureaucrat grade " << main.getGrade() << ".";
    return out;
}