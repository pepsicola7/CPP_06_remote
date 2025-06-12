/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 20:29:14 by peli              #+#    #+#             */
/*   Updated: 2025/06/12 21:17:44 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

void identify(Base* p)
{
    if (p == NULL)
    {
        std::cerr << "The pointer dosen't exist" << std::endl;
        return ;
    }
    if (dynamic_cast<A*>(p))
    {
        std::cout << "A" << std::endl;
        return ;
    }
    if (dynamic_cast<B*>(p))
    {
        std::cout << "B" << std::endl;
        return ;
    }
    if (dynamic_cast<C*>(p))
    {
        std::cout << "C" << std::endl;
        return ;
    }
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return ;
    }    
    catch(...)
    {
    }
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return ;
    }    
    catch(...)
    {
    }
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return ;
    }    
    catch(...)
    {
    }
}

// It prints the actual type of the object referenced by p: "A", "B", or "C". Using a pointer inside this function is forbidden.