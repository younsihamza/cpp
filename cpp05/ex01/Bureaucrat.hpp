/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:07:59 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/02 14:07:59 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string& name , int grade);
        Bureaucrat( const Bureaucrat& main);
        Bureaucrat& operator=(const Bureaucrat& main);
        ~Bureaucrat();

        const std::string& getName()const ;
        int getGrade()const;
        void increament();
        void decrement();
        void signForm(Form& frm);
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

std::ostream& operator<<(std::ostream& out , const Bureaucrat& main);

#endif