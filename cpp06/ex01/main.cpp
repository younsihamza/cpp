/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:08:50 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/04 16:08:50 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *hamza = new Data();
    hamza->a = 69;
    hamza->z = 5;
    hamza->hamza = "hamza";
   uintptr_t h = Serializer::serialize(hamza);
   hamza =  Serializer::deserialize(h);

   std::string *a = new std::string("hamza");
   int *r = reinterpret_cast<int*> (a);
   std::cout << *r <<std:: endl;
   a = reinterpret_cast<std::string*> (r);
   std::cout << *a <<std:: endl;




}