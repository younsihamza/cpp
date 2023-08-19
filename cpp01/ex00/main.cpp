/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:02:14 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/15 14:38:10 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    std::string name1 = "younsi";
    std::string name2 = "hamza";
    Zombie *hamza;
    hamza = newZombie(name1);
    randomChump(name2);
    delete hamza;
}