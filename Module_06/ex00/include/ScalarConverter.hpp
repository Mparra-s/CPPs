/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:42:53 by mparra-s          #+#    #+#             */
/*   Updated: 2026/02/03 11:17:05 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <climits>


class ScalarConverter
{
    private:
        int      _integer;
        float    _f_decimal;
        double   _d_decimal;
        std::string  _letter;
    
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& copy);
        virtual ~ScalarConverter();
        
        ScalarConverter& operator=(const ScalarConverter& other);
        static void convert(std::string name);
        
         static int checkType(std::string name, size_t length);
         static int checkSpecial(std::string name);
         static int checkLetter(std::string name, size_t length);
         static int checkInt(std::string name, size_t length);
         static int checkFloat(std::string name, size_t length, size_t dot);
         static int checkDouble(std::string name, size_t length, size_t dot);
         
         static void convertSpecial(std::string name);
         static void convertLetter(std::string name, size_t length);
         static void convertInt(std::string name);
         static void convertFloat(std::string name);
         static void convertDouble(std::string name);
         static bool checkTabs(std::string name);
};

#endif 