/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:08:53 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/04 16:08:53 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr){

    return reinterpret_cast<uintptr_t> (ptr);
}

Data* Serializer::deserialize(uintptr_t raw){
    
    return reinterpret_cast<Data*>(raw);
}