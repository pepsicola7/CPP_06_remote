/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:38:25 by peli              #+#    #+#             */
/*   Updated: 2025/06/12 14:16:54 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <cmath>
#include <climits>

class ScalarConverter
{
private:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(ScalarConverter const&);
    ScalarConverter& operator=(ScalarConverter const&);
public:
    static void convert(std::string const& input);
};

