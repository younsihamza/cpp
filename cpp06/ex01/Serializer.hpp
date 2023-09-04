/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:08:56 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/04 16:08:56 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP


 #include <iostream>

struct Data{
    int a;
    int z;
    std::string hamza;
};

class Serializer
{
    private:
        Serializer();
        Serializer(Serializer const & main);
        Serializer& operator=(Serializer const &main);
    public:
        static uintptr_t serialize(Data* ptr); 
        static Data* deserialize(uintptr_t raw);


};
#endif