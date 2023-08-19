/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:47:15 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/15 15:18:50 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i;
    Zombie *z;
    int number;

    i = 0;
    number = 5;
    z = zombieHorde(number,"hamza");
    while(i < number)
    {
        z[i++].announce();
    }
    delete [] z;
}

