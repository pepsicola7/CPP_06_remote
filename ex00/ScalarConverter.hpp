/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:38:25 by peli              #+#    #+#             */
/*   Updated: 2025/06/11 17:09:15 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <cmath>

class ScalarConverter
{
public:
    ScalarConverter();
    ~ScalarConverter();
    void convert(std::string& input);
};

