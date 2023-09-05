/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:08:24 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/04 18:51:53 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
        Bureaucrat a("hamza",4);
        RobotomyRequestForm t("hamza");
        PresidentialPardonForm h("hy9");
        ShrubberyCreationForm r("younsi");
        a.signForm(t);
        a.signForm(h);
        a.signForm(r);

        t.execute(a);
        h.execute(a);
        r.execute(a);
        std::cout << a << std::endl;
        std::cout << h << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << "EXCEPTION : " << e.what() << std::endl;
    }
}