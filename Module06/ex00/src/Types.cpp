/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Types.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:18:18 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/30 11:20:30 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

bool ScalarConverter::checkTabs(std::string name){
    std::string letters[] = {"a", "b", "t", "n", "v", "f", "r", "0"};
    std::string tabletter;
    unsigned int longitud = sizeof(letters)/sizeof(*letters);
    
    tabletter = name[1];
    if(name[0] != '\\')
        return (0);
    for(unsigned int i = 0; i < longitud; i++)
    {
        if(letters[i] == tabletter)
            return (1);
    }
    return (0);   
}


int ScalarConverter::checkSpecial(std::string name){
    std::string array[] = {"nan", "-inf", "+inf", "-inff", "+inff", "inf", "inff", "nanf"};
    unsigned int longitud = sizeof(array)/sizeof(*array);
    for(unsigned int i = 0; i < longitud; i++)
        if(array[i] == name)
            return (1);        
    return(0);
    
}

int ScalarConverter::checkLetter(std::string name, size_t length){
    if((length == 1 && !isdigit(name[0])) || (length == 2 && checkTabs(name)))
        return(1);
    if(length == 3 && name[0] == '\'' && name[2] == '\'')
        return(1);
    else
        return(0);
}

int ScalarConverter::checkInt(std::string name, size_t length){
    size_t i = 0;
    
    if (length > 1 && (name[0] == '-' || name [0] == '+'))
        i++;
    while(i < length)
    {
        if(!isdigit(name[i]))
            return(0);
        i++;
    }
    return(1);
}

int ScalarConverter::checkFloat(std::string name, size_t length, size_t dot)
{
    size_t i = 0;
    
    if(((name[0] == '+' || name[0] == '-')) && isdigit(name[1]))
        i++;
    while(i < dot && name[i])
    {
        if(!isdigit(name[i]) && name[i] != '.')
            return(0);
        i++;
    }
    i++;
    while(i < length && isdigit(name[i]))
    {
        if(!isdigit(name[i]) && name[i] != 'f')
            return(0);
        i++;
    }
    if (name[i] == 'f' && name[i + 1] == '\0' && isdigit(name[i - 1]))
        return(1);
    return (0);
}


int ScalarConverter::checkDouble(std::string name, size_t length, size_t dot)
{
    size_t i = 0;
    
    if(((name[0] == '+' || name[0] == '-')) && isdigit(name[1]))
        i++;
    while(i < dot && name[i])
    {
        if(!isdigit(name[i]) && name[i] != '.')
            return(0);
        i++;
    }
    i++;
    while(i < length && name[i])
    {
        if(!isdigit(name[i]) && name[i])
            return(0);
        i++;
    }
    return (1);
}


int ScalarConverter::checkType(std::string name, size_t length){
    
    size_t  dot = name.find('.');
    size_t  f = name.find('f');
    
    if (dot == std::string::npos)
    {
        if (checkSpecial(name) == 1)
            return(1);
        if (checkLetter(name, length) == 1)
            return(2);
        if (checkInt(name, length) == 1)
            return(3);
    }
    if (f != std::string::npos && dot != std::string::npos)
    {
        if (checkFloat(name, length, dot))
            return(4);
    }
    if (f == std::string::npos && dot != std::string::npos)
    {
        if(checkDouble(name, length, dot))
            return(5);
    }
    return(6);  
}