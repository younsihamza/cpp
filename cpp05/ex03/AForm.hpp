/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:08:55 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/02 14:08:55 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "fstream"
class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool sign;
        const int  gradeToSign;
        const int gradeToExecute;
    public:
        Form();
        Form(const std::string& name,int gradeToSign ,int gradeToExecute);
        Form(const Form& main);
        Form& operator=(const Form& main);
        virtual ~Form();

        void beSigned(const Bureaucrat& B);
        const std::string& getName()const ;
        bool getSign()const ;
        int getGradeToSign()const ;
        int getGradeToExecute()const ;
        void setSign(bool);
        virtual void execute(Bureaucrat const & executor) const  = 0;

        class GradeTooHighException : public std::exception
        {
            public:
               const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
               const char* what() const throw();
        };
        class NoSignedFormException : public std::exception
        {
            public:
               const char* what() const throw();
        };
};
    std::ostream& operator<<(std::ostream& out , const Form& main);
#endif