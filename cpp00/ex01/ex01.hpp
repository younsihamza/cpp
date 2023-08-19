/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:07:22 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/01 12:35:27 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EX01_HPP
#define EX01_HPP
#include <iostream>
#include "Contact.hpp"
#include "Phonebook.hpp"
#include  <iomanip>
int ft_isalpha(std::string str);
int ft_isdigit(std::string str);
std::string ft_upper(std::string str);
std::string  edit_string(std::string str);
void protect_getline();
int len_space(std::string str);

#endif 