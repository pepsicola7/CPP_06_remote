/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:38:22 by peli              #+#    #+#             */
/*   Updated: 2025/06/11 18:40:52 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    
}

ScalarConverter::~ScalarConverter()
{
    
}

void ScalarConverter::convert(std::string& input)
{
    bool    special = false;
    char*   end;
    double valeur;

    if (input == "nan" || input == "nanf")
    {
        special = true;
        valeur  = std::numeric_limits<double>::quiet_NaN();
    }
    else if (input == "inf" || input == "inff" )
    {
        special = true;
        valeur = std::numeric_limits<double>::infinity();
    }
    else if (input == "-inf" || input == "-inff" )
    {
        special = true;
        valeur = -std::numeric_limits<double>::infinity();
    }

    valeur = std::strtod(input.c_str(), &end);
    if ((input[0] >= 'A' && input[0] <= 'Z') || (input[0] >= 'a' && input[0] <= 'z'))
    {
        if (input.length() > 1)
        {
            std::cerr << "char: Non displayable" << std::endl;
        }
        else
        {
            char c = input[0];
            std::cout << "char: '" << c << "'" << std::endl;
            std::cout << "int: " << static_cast<int>(c) << std::endl;
            std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(c) << std::endl;
            return;
        }
    }
    if (*end != '\0' && (end != input.c_str() + std::strlen(input.c_str()) - 1) && *end != 'f')
    {
        std::cerr << "Conversion failed: invalid input" << std::endl;
        return ;
    }
    char c = static_cast<char>(valeur);
    if (valeur < 32 || valeur > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(valeur) << std::endl; 
    std::cout << "float: " << static_cast<float>(valeur) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(valeur) << std::endl;
};


// int i = 0;
// size_t len = std::strlen(input.c_str());
// while (input[i] && ((input[i] >= '0' && input[i] <= '9') || input[i] == '.' || input[i] == 'f'))
// {
//     if (input[i] == '.' || input[i] == 'f')
//     {
//         if (input[i] == '.')
//         {
//             i++;
//             while (input[i] && (input[i] >= '0' && input[i] <= '9'))
//             {
//                 i++;
//             }
//             if (i == len - 1)
//             {
//                 std::cout << "int: " << static_cast<int>(input[i]) << std::endl;
//                 std::cout << "float: " << static_cast<float>(input[i]) << std::endl;
//                 std::cout << "double: " << static_cast<double>(input[i]) << std::endl;
//                 return ;
//             }
//             if ((i == len - 2) && (input[i] == 'f'))
//             {
//                 std::cout << "int: " << static_cast<int>(input[i]) << std::endl;
//                 std::cout << "float: " << static_cast<float>(input[i]) << std::endl;
//                 std::cout << "double: " << static_cast<double>(input[i]) << std::endl;
//                 return ;
//             }
//         }
//     }
//     i++;
// }
// if (i = len - 1)
// {
//     std::cout << "int: " << static_cast<int>(input[i]) << std::endl;
//     std::cout << "float: " << static_cast<float>(input[i]) << std::endl;
//     std::cout << "double: " << static_cast<double>(input[i]) << std::endl;
//     return ;
// }