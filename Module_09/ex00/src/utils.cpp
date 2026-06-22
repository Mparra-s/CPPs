/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:07:10 by mparra-s          #+#    #+#             */
/*   Updated: 2026/03/03 15:08:26 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

void BitcoinExchange::addData(std::string date, float factor)
{
    btcData[date] = factor;   
}


bool BitcoinExchange::formatDate(std::string line)
{
    if (line.length() < 10)
        return 0;
    if(line[4] != '-' || line[7] != '-')
        return(0);
    for(unsigned int i = 0; i < 4; i++)
        if(!isdigit(line[i]))
            return 0;
    for(unsigned int i = 5; i < 7; i++)
        if(!isdigit(line[i]))
            return 0;
    for(unsigned int i = 8; i < 10; i++)
        if(!isdigit(line[i]))
            return 0;
    return 1;
}



bool BitcoinExchange::checkDate(std::string line, int& counter)
{
    int year;
    int month;
    int day;
    int normal[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int leap[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if(!formatDate(line))
    {
        if(counter != 1)
             std::cout << "\033[31mError:\033[0m bad input ==> " << line.substr(0,10);
        return 0;            
    }
    year = std::atoi((line.substr(0,4).c_str()));
    month = std::atoi((line.substr(5,2).c_str()));
    day = std::atoi((line.substr(8,2).c_str())); 
    if(month > 12 || month < 1)
    {
        std::cout << "\033[31mError:\033[0m bad input ==> " << line.substr(0,10);
        return 0;
    }
    if(year % 4 != 0)
        if(day > normal[month - 1])
        {
            std::cout << "\033[31mError:\033[0m bad input ==> " << line.substr(0,10);
            return 0;
        }        
    if(year % 4 == 0)
    {
        if((year % 100 == 0) && (year % 400 != 0))
        {
            if(day > normal[month - 1])
            {
                std::cout << "\033[31mError:\033[0m bad input ==> " << line.substr(0,10);
                return 0;
            }
        }  
        else if (day > leap[month - 1])
        {
            std::cout << "\033[31mError:\033[0m bad input ==> " << line.substr(0,10);
            return 0;
        }           
    }
    return (1);    
}



bool BitcoinExchange::checkFactor(std::string line)
{
    int             point = 0;
    float           number;
    unsigned int    format = 0;
    std::string error;

    if((line.length() >= 12) && (line[10] == ',') && isdigit(line[11]))
        format = 11;
    else if((line.length() >= 14) && (line[10] == ' ') && (line[11] == '|')
        && (line [12] == ' ') && (isdigit(line[13]) || line[13] == '-'))
        format = 13;
    
    if(format == 11 || format == 13)
    {
        for(unsigned int i = format; i < line.length(); i++)
        {
            if(i == format && line[i] == '-')
                continue ;
            if(!isdigit(line[i]) && line[i] != '.')
                return 0;
            if(line[i] == '.')
                point++;
        }
        if(point > 1)
            return 0;
        number = std::atof(line.substr(format).c_str()); 
        if(number < 0)
        {
            std::cout << "\033[31mError:\033[0m negative number";
            return 0;
        }
        if(number > 1000 && format == 13)
        {
            std::cout << "\033[31mError:\033[0m number too large";
            return 0;
        }
        return 1;
    }
    else
    {
        std::cout << "\033[31mError:\033[0m the conversion value is not a number";
        return 0;
    }
        return 0;
}



void BitcoinExchange::insertData(std::string line)
{
    float number;
    std::string date;
    std::string conversion_rate;

    date = line.substr(0, 10);
    conversion_rate = line.substr(11);
    number = std::atof(conversion_rate.c_str());
    addData(date, number);
}



bool BitcoinExchange::checkFormat(std::string line, std::string file, int& counter)
{
    if(!checkDate(line, counter))
    {
        if(counter != 1)
            std::cout << " ==> \033[33mFound:\033[0m in: " << file << " at line: " << counter << std::endl;
        return 0;
    }
    if(!checkFactor(line))
    {
        if(counter != 1)
            std::cout << "  ==> \033[33mFound:\033[0m " << file << " at line: " << counter << std::endl;
        return 0;
    }
    return (1);
}