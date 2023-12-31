/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:09:06 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/02 14:09:06 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
class Intern
{   
    public:
        Intern();
        Intern(const Intern& main);
        Intern& operator=(const Intern& main);
        ~Intern();

        Form *cloneShrubbery(const std::string& target);
        Form *cloneRoboto(const std::string& target);
        Form *clonePresidential(const std::string& target);

        Form* makeForm(const std::string& FormName ,const std::string& target);
};

#endif