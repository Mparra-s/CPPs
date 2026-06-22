/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 10:40:24 by mparra-s          #+#    #+#             */
/*   Updated: 2026/02/23 10:40:24 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) : btcData(copy.btcData){}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other){
    if(this != &other)
        btcData = other.btcData;

    return(*this);
}


BitcoinExchange::~BitcoinExchange(){}



const std::map<std::string, float>& BitcoinExchange::getMap() const
{
    return(btcData);
}


std::string modTotal(double value)
{
    std::string total;
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << value;

    total = oss.str();

    size_t dotPos = total.find('.');
    if (dotPos != std::string::npos)
    {
        while (!total.empty() && total[total.size() - 1] == '0')
            total.erase(total.size() - 1);

        if (!total.empty() && total[total.size() - 1] == '.')
            total.erase(total.size() - 1);
    }
    return total;
}



void BitcoinExchange::printConv(std::string line, std::string document, int& counter)
{
    float total;
    float coins;
    std::string rtotal;
    std::string date;
    std::map<std::string, float> map = getMap();
    std::map<std::string, float>::const_iterator it;
    
    date = line.substr(0,10);                               
    coins = std::atof(line.substr(13).c_str());
    it = map.lower_bound(date);
    if(it == map.end() && it != map.begin())
        it--;
    if(it == map.begin() && it->first > date)
    {
        std::cout << "\033[31mError:\033[0m the date to check is previous to the first date registered ==> " << it->first;
        std::cout << "  ==> \033[33mFound:\033[0m " << document << " at line: " << counter << std::endl;
        return ;
    }
    total = coins * it->second;
    rtotal = modTotal(total); 
    std::cout << date << " => " << coins << " = " << rtotal << std::endl;
}


void BitcoinExchange::fillMap(std::ifstream& file, std::string document)
{
    if(!file)
    {
        std::cout << "\033[31mError:\033[0m Data file cannot be open" << std::endl;
        return ;
    }
    std::string line;
    int counter = 1;
    while(std::getline(file, line))
    {
        if(checkFormat(line, document, counter))
            insertData(line);
        counter++;
    }
}


void BitcoinExchange::executeConv(std::ifstream& file, std::string document)
{
    if(!file)
    {
        std::cout << "\033[31mError:\033[0m Converted file cannot be open" << std::endl;
        return ;
    }
    std::string line;
    int counter = 1;
    while(std::getline(file, line))
    {
        if(checkFormat(line, document, counter))
            printConv(line, document, counter);
        counter++;
    }
}