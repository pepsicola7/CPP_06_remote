/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:38:22 by peli              #+#    #+#             */
/*   Updated: 2025/06/12 14:29:00 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string const& input)
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

    if (special == true)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << static_cast<float>(valeur) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(valeur) << std::endl;
        return ;
    }
    
    if (input.length() == 1 && !std::isdigit(input[0]))
    {
        char c = input[0];
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
        return;
    }
    valeur = std::strtod(input.c_str(), &end);
    if (*end != '\0' && (end != input.c_str() + std::strlen(input.c_str()) - 1) && *end != 'f')
    {
        std::cerr << "Conversion failed: invalid input" << std::endl;
        return ;
    }
    // Affichage char
    char c = static_cast<char>(valeur);
    std::cout << "char: ";
    if (valeur < 0 || valeur > 127)
        std::cout << "impossible" << std::endl;
    if (valeur < 32 || valeur > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << c << "'" << std::endl;
    
    // Affichage de int
    std::cout << "int: ";
    if ('c' < INT_MIN || valeur > static_cast<double>(INT_MAX))
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(valeur) << std::endl;
    
    // Affichage de float
    float f = static_cast<float>(valeur);
    std::cout << "float: " << f;
    if (f == static_cast<int>(f))
        std::cout << ".0";
    std::cout << "f" << std::endl;

    // Affichage de double
    std::cout << "double: " << valeur;
    if (valeur == static_cast<int>(valeur))
        std::cout << ".0";
    std::cout << std::endl;
};
