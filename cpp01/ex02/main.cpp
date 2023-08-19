/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:47:39 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/15 14:43:31 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string word = "HI THIS IS BRSIN";
    std::string *stringPTR = &word;
    std::string& stringREF = word;

    std::cout << "the memory address of the string varisble : " << &word << std::endl;
    std::cout << "the memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "the memory address held by stringREF : " << &stringREF << std::endl;

    std::cout << "the value of the string variable : " << word << std::endl;
    std::cout << "the value pointer to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "the value pointer to by stringREF : " << stringREF << std::endl;

}