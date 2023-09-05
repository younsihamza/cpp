/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:09:30 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/02 14:09:30 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
class ShrubberyCreationForm : public  Form
{
    private:
         std::string target; 
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& main);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& main);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;

        class fileNotWork: public std::exception
        {
            public:
                const char* what() const throw();
        };
};
#endif