/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:52:31 by hyounsi           #+#    #+#             */
/*   Updated: 2023/11/12 15:52:31 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <vector>
#include <stack>

template <class T,class cont = std::deque<T> > class MutantStack: public std::stack<T, std::deque<T> > {
    public:
        typedef typename cont::iterator iterator;
        MutantStack()
        {}
        
        MutantStack(const MutantStack &main):std::stack<T,cont >(main)
        {
            if(&main != this)
                *this = main;
        }

        MutantStack& operator=(const MutantStack &main)
        {
            std::stack<T,cont >::operator=(main);
            return *this;
        }

        iterator begin()
        {
            return std::stack<T,cont>::c.begin();
        }

        iterator end()
        {
            return std::stack<T,cont>::c.end();
        }


};


#endif