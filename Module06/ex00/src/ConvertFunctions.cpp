/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertFunctions.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:11:45 by mparra-s          #+#    #+#             */
/*   Updated: 2026/02/03 12:30:40 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"
#include <iomanip>

void ScalarConverter::convertSpecial(std::string name)
{
    std::string array1[] = {"nan", "-inf", "+inf", "inf"};
    std::string array2[] = {"-inff", "+inff", "inff", "nanf"};
    unsigned int longitud1 = sizeof(array1)/sizeof(*array1);
    unsigned int longitud2 = sizeof(array2)/sizeof(*array2);
    
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    for(unsigned int i = 0; i < longitud1; i++)
    {
        if(name == array1[i])
        {
            std::cout << "float: " << array1[i] << "f" << std::endl;
            std::cout << "double: " << array1[i] << std::endl;
        }
    }
    for(unsigned int j = 0; j < longitud2; j++)
    {
        if(name == array2[j])
        {
            std::cout << "float: " << array2[j] << std::endl;
            std::cout << "double: " << array2[j].erase(array2[j].length() -1) << std::endl;
        }
    }
    
}


void ScalarConverter::convertLetter(std::string name, size_t length)
{
    char letter;
    bool valid = true;
    
    if (length ==1)
        letter = name[0];
    else if (length == 2)
    {
        switch (name[1])
        {
            case 'a':
                letter = '\a';
                break ;
            case 'b':
                letter = '\b';
                break ;
            case 't':
                letter = '\t';
                break ;
            case 'n':
                letter = '\n';
                break ;
            case 'v':
                letter = '\v';
                break ;
            case 'f':
                letter = '\f';
                break ;
            case 'r':
                letter = '\r';
                break ;
            case '0':
                letter = '\0';
                break ;
        }        
    }
    if(!valid)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return ;        
    }
    if(length == 3)
        letter = name[1];
    if (letter > 31 && letter < 127)
        std::cout << "char: " << letter << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(letter) << std::endl;
    std::cout << "float: " << static_cast<float>(letter) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(letter) << ".0" << std::endl;  
}

void ScalarConverter::convertInt(std::string name)
{
    int value;
    std::stringstream check(name);
    check >> value;
    if(check.fail())
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return ;
    }
    std::cout << std::fixed << std::setprecision(1); 
    if (value < 32 || value > 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(value) << std::endl;
    std::cout << "int: " << value << std::endl;
    std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(value) << std::endl;    
}


void ScalarConverter::convertFloat(std::string name)
{
    float value;
    std::stringstream check(name);
    check >> value;
    if(check.fail())
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return ;        
    }
    if (value < 32 || value > 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(value) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    if(static_cast<double>(value) <= INT_MAX && static_cast<double>(value) >= INT_MIN) 
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    else
        std::cout << "int: impossible" << std::endl; 
    std::cout << "float: " << value << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(value) << std::endl;
}


void ScalarConverter::convertDouble(std::string name)
{

    double value;
    std::stringstream check(name);
    check >> value;
    if(check.fail())
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return ;        
    }
    if (value < 32 || value > 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(value) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    if(value <= INT_MAX && value >= INT_MIN) 
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
    std::cout << "double: " << value << std::endl;
}