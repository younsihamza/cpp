/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:09:17 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/04 16:09:17 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
Base * generate(void);
void identify(Base* p);
void identify(Base& p);
int main ()
{
    Base *p =  dynamic_cast<A*>(generate());
        identify(p);
     if(p)
        identify(*p);
}