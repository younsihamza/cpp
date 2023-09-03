/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:09:08 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/03 15:19:00 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


int main()
{
    Form *w  = NULL;
    try
    {
        Bureaucrat a("hamza",10);
        PresidentialPardonForm t("hamza");
        Intern yy;
        w = yy.makeForm("robotomy request" ,"me");
        if(w != NULL)
        {
        a.signForm(*w);
        a.executeForm(*w);

        }
        std::cout << a << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << "EXCEPTION : " << e.what() << std::endl;
    }
    if(w != NULL)
        delete w;
}