/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:08:41 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/02 14:08:41 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm",145,137),target("home")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):Form("ShrubberyCreationForm",145,137),target(target)
{}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& main):Form("ShrubberyCreationForm",145,137),target(main.target)
{
    if(&main != this)
        *this = main;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& main)
{
    if(&main != this)
        this->setSign(main.getSign());
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void printTree(std::ofstream &out)
{
    out << "          /\\" <<std::endl;
    out << "         /  \\" <<std::endl;
    out << "        /    \\" <<std::endl;
    out << "       /      \\" <<std::endl;
    out << "      /        \\" <<std::endl;
    out << "     /          \\" <<std::endl;
    out << "    /            \\" <<std::endl;
    out << "   /              \\" <<std::endl;
    out << "   ----------------" <<std::endl;
    out << "          |||" <<std::endl;
    out << "          |||" <<std::endl;
    out << "          |||" <<std::endl;
    out << "          |||" <<std::endl;
    out << "          ---" <<std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(getSign() == false)
        throw NoSignedFormException();
    if(executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
    std::ofstream out;
    out.open(target,std::ios::app);
    if(!out.is_open())
        throw fileNotWork();
    printTree(out);
    out.close();
}
 const char* ShrubberyCreationForm::fileNotWork::what() const throw()
 {
    return  "file did not open ";
 }
 