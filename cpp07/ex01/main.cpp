/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:09:32 by hyounsi           #+#    #+#             */
/*   Updated: 2023/11/10 11:06:36 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <array>

class Awesome
{
public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }
private:
int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }
void prints( int  &x ) { x = 12; }

int main() {
int tab[] = { 0, 1, 2, 3};
Awesome tab2[5];
iter( tab, 5, prints );
iter( tab, 5, print<int> );
iter( tab2, 5, print<Awesome> );
return 0;
}