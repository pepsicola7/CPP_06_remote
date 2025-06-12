/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:45:18 by peli              #+#    #+#             */
/*   Updated: 2025/06/12 18:46:47 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
    Data   Bob;

    Bob.i = 42;
    Bob.name = "Bob";
    
    uintptr_t raw = Serialize::serialize(&Bob);
    Data* deserialized = Serialize::deserialize(raw); 
    
    std::cout << "Before: " << &Bob << ", ID: " << Bob.i << ", Name: " << Bob.name << std::endl;
    std::cout << "Deserialized: " << deserialized << ", ID: " << deserialized->i << ", Name: " << deserialized->name << std::endl;

}
