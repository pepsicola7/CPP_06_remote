/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:41:03 by peli              #+#    #+#             */
/*   Updated: 2025/06/12 19:32:23 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize()
{
    
};

Serialize::~Serialize()
{
    
};

Serialize::Serialize(Serialize const&) 
{
};

Serialize& Serialize::operator=(Serialize const&) 
{
    return *this;
};

// It takes a pointer and converts it to the unsigned integer type uintptr_t.
uintptr_t Serialize::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr)); 
};

Data* Serialize::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
};
//It takes an unsigned integer parameter and converts it to a pointer to Data.
