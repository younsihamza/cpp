/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:07:33 by hyounsi           #+#    #+#             */
/*   Updated: 2023/07/29 09:07:33 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "ex01.hpp"

class PhoneBook {
    private:
        Contact tablecontact[8];
        int index;
        int fixindex;
    public:
        void ADD();
        void SEARCH();
};

#endif 