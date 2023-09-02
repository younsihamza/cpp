/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:08:03 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/02 14:08:03 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
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
        ~Form();

        void beSigned(const Bureaucrat& B);
        const std::string& getName()const ;
        bool getSign()const ;
        int getGradeToSign()const ;
        int getGradeToExecute()const ;

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
};
    std::ostream& operator<<(std::ostream& out , const Form& main);
#endif