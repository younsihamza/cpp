/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:47:29 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/15 15:18:00 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *tableZombie;
    int i;
    i = 0;
    
    if(N < 0)
    {
        std::cout << "ERROR"<<std::endl;
        return NULL;
    }
    tableZombie = new Zombie [N];
    while(i < N)
    {
        tableZombie[i++].setName(name);
    }
    return(tableZombie);
}