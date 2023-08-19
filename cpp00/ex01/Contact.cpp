/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:07:17 by hyounsi           #+#    #+#             */
/*   Updated: 2023/07/29 09:07:17 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"


void  Contact::SetFirstName(std::string FirstName)
{
    first_name = FirstName; 
}

void Contact::SetLastName(std::string LastName)
{
    last_name = LastName; 
}

void Contact::SetNickName(std::string NickName)
{
    nickname = NickName; 
}

void Contact::SetPhoneNumber(std::string PhoneNumber)
{
    phone_number = PhoneNumber; 
}

void Contact::SetDarkestSecret(std::string DarkestSecret)
{
    darkest_secret = DarkestSecret; 
}

std::string Contact::GetFirstName()
{
    return (first_name);
}

std::string Contact::GetLastName()
{
    return (last_name);
}

std::string Contact::GetNickName()
{
    return (nickname);
}

std::string Contact::GetPhoneNumber()
{
    return (phone_number);
}

std::string Contact::GetDarkestSecret()
{
    return (darkest_secret);
}