/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:08:59 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 17:56:25 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& main);
        Brain& operator=(const Brain& main);
        ~Brain();

        void setIdeas(int i,std::string replace );
        std::string getIdeas(int i)const ;
};

#endif