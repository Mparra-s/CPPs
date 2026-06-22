/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 11:17:03 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/30 11:18:39 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"


ScalarConverter::ScalarConverter() : _integer(0), _f_decimal(0), _d_decimal(0),
    _letter(""){
    std::cout << "Default ScalarConverter constructor" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy) : 
    _integer(copy._integer),
    _f_decimal(copy._f_decimal),
    _d_decimal(copy._d_decimal),
    _letter(copy._letter){
    std::cout << "Scalar Converter constructor copy" << std::endl;
}

ScalarConverter::~ScalarConverter(){
    std::cout << "Deconstructor Scalar Converter" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other){
    if(this != &other)
    {
        this->_integer = other._integer;
        this->_d_decimal = other._d_decimal;
        this->_f_decimal = other._f_decimal;
        this->_letter = other._letter;
    }
    return(*this);
}

void ScalarConverter::convert(std::string name){
    
    int     level;
    size_t  length = name.length();
    level = ScalarConverter::checkType(name, length);
    switch(level)
    {
        case 1:
            ScalarConverter::convertSpecial(name);
            break ;
        case 2:
            ScalarConverter::convertLetter(name, length);
            break ;
        case 3:
            ScalarConverter::convertInt(name);
            break ;
        case 4:
            ScalarConverter::convertFloat(name);
            break ;
        case 5:
            ScalarConverter::convertDouble(name);
            break ;
        case 6:
            std::cout << "Error: Incorrect parameter introduced" << std::endl;
            break ;            
    }
}