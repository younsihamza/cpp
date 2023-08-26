/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:09:52 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/26 11:09:52 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURSE_HPP
#define MATERIASOURSE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public  IMateriaSource
{
    private:
        AMateria **tableToLearn;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& main);
        MateriaSource& operator=(const  MateriaSource& main); 
        ~MateriaSource();

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif