/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:07:06 by hyounsi           #+#    #+#             */
/*   Updated: 2023/07/31 11:31:55 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

void PhoneBook::ADD()
{
    std::string tmp;
    while(1){  
        std::cout << "ENTER NEXT INFORMATION :" << std::endl;
        std::cout << "(if you want to returning to list of operation enter ( ~@ ))" << std::endl;
        std:: cout << "FIRST NAME : ";
        std::getline(std::cin,tmp);
        protect_getline();
        while(tmp.length() == 0 || tmp == "~@"|| (int)tmp.length() == len_space(tmp))
        {
            if( tmp == "~@")
                return ;
            std:: cout << "TRY TO ENTER VALUED FIRST NAME : ";
            std::getline(std::cin,tmp);
            protect_getline();
        }
        tablecontact[index].SetFirstName(tmp);
        std:: cout << "LAST NAME : ";
        std::getline(std::cin,tmp);
        protect_getline();
        while(tmp.length() == 0 || tmp == "~@" || (int)tmp.length() == len_space(tmp))
        {
            if (tmp == "~@")
                return ;
            std:: cout << "TRY TO ENTER VALUED LAST NAME : ";
            std::getline(std::cin,tmp);
            protect_getline();
        }
        tablecontact[index].SetLastName(tmp);
        std:: cout << "NICKNAME : ";
        std::getline(std::cin,tmp);
        protect_getline();
        while(tmp.length() == 0 || tmp == "~@" || (int)tmp.length() == len_space(tmp))
        {
            if( tmp == "~@")
                return ;
            std:: cout << "TRY TO ENTER VALUED NICKNAME : ";
            std::getline(std::cin,tmp);
            protect_getline();
        }
         tablecontact[index].SetNickName(tmp);
        std:: cout << "PHONE NUMBER : ";
        std::getline(std::cin,tmp);
        protect_getline();
        while(tmp.length() == 0 || ft_isdigit(tmp) == 1  || tmp == "~@")
        {
            if( tmp == "~@")
                return ;
            std:: cout << "TRY TO ENTER VALUED PHONE NUMBER : ";
            std::getline(std::cin,tmp);
            protect_getline();
        }
        tablecontact[index].SetPhoneNumber(tmp);
        std:: cout << "DARKEST SECRET : ";
        std::getline(std::cin,tmp);
        protect_getline();
        while(tmp.length() == 0 || tmp == "~@"|| (int)tmp.length() == len_space(tmp))
        {
            if( tmp == "~@")
                return ;
            std:: cout << "TRY TO ENTER VALUED DARKEST SECRET : ";
            std::getline(std::cin,tmp);
            protect_getline();
        }
        tablecontact[index].SetDarkestSecret(tmp);
        index += 1;
        if(fixindex < 8)
            fixindex += 1;
        if (index == 8)
            index = 0;
        std::cout << "if you want to enter other contact please enter(yes) :";
        std::getline(std::cin,tmp);
        protect_getline();
        if (tmp != "yes")
            return;
    }
}

void out_info(Contact Phone)
{
    std::cout << "contaact information :" << std::endl;
    std::cout << "FIRST NAME : " << Phone.GetFirstName()<< std::endl;
    std::cout << "LAST NAME : " << Phone.GetLastName()<< std::endl;
    std::cout << "NICKNAME : " << Phone.GetNickName()<< std::endl;
    std::cout << "PHONE NUMBER : " << Phone.GetPhoneNumber()<< std::endl;
    std::cout << "DARKEST SECRET : " << Phone.GetDarkestSecret()<< std::endl;
}

// void printf_help(std::string name)
// {
//     if(name.length() > 10 )
//         std::cout << std
// }
void PhoneBook::SEARCH()
{
    int i;
    std::string tmp;
    int clm = 10;

    while(1)
    {
    std::cout <<std::setw(10)<<"INDEX" <<"|";
    std::cout <<std::setw(10)<< "FIRST NAME" <<"|";
    std::cout <<std::setw(10)<< "LAST NAME"<<"|";
    std::cout <<std::setw(10)<< "NICKNAME" <<"|" <<std::endl;
    std::cout  << std::setfill('-') << std::setw(43)<<""<<std::endl;
    i = 0;
    while(i < fixindex)
    {  

        std::cout << std::setfill(' ') << "|"<<std::setw(clm) << std::to_string(i + 1) << "|";
        std::cout << std::setw(clm) << std::setfill(' ')<< edit_string(tablecontact[i].GetFirstName())<< "|";
        std::cout << std::setw(clm)<< edit_string(tablecontact[i].GetLastName())<< "|";
        std::cout << std::setw(clm)<< edit_string(tablecontact[i].GetNickName())<< "|"<< std::endl;
        i++;
    }
        std::cout << "enter the index of contact : ";
        std::getline(std::cin,tmp);
        protect_getline();
        while(std::atoi(tmp.c_str()) > fixindex || std::atoi(tmp.c_str()) < 1 || tmp.length() != 1)
        {
            std::cout << "if you want to returning to list of operation enter" << std::endl;
            std::cout << "index out of range !! ";
            std::cout << "enter the index of contact : ";
            std::getline(std::cin,tmp);
            protect_getline();
            if(tmp == "~@")
                return;
        }
            out_info(tablecontact[std::atoi(tmp.c_str()) - 1]);
            std::cout << "if you want to search  for contact please enter(yes) :";
            std::getline(std::cin,tmp);
            protect_getline();
            if (tmp != "yes")
                return;
    }
}