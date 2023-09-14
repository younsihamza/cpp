/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:09:14 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/12 17:56:40 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    int index = 0;
    std::srand(static_cast<unsigned int>(std::time(NULL))); 
    index = (std::rand() % 3);
    if(index == 0)
        return dynamic_cast<Base*> (new A());
    else if(index == 1)
        return dynamic_cast<Base*> (new B());
    else if(index == 2)
        return dynamic_cast<Base*> (new C());
    return NULL;
}

void identify(Base* p)
{
    if(p == NULL)
        return ;
    if(dynamic_cast<A*> (p) != NULL) 
        std::cout << "A" <<std::endl;
    else if(dynamic_cast<B*> (p) != NULL)
        std::cout << "B" <<std::endl;
    else if(dynamic_cast<C*> (p) != NULL)
        std::cout << "C" <<std::endl;
}

void identify(Base& p)
{
    try{
        try{
            static_cast<void> (dynamic_cast<A&> (p));
            std::cout << "A" <<std::endl;
        }catch(...)
        {}
        try{
            p = dynamic_cast<B&> (p);
            std::cout << "B" <<std::endl;
        }catch(...)
        {}
        try{
            p = dynamic_cast<C&> (p);
            std::cout << "C" <<std::endl;
        }catch(...)
        {}
    }catch(...)
    {
    }
}