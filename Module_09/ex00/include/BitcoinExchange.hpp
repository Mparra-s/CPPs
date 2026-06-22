#ifndef BTC_HPP
#define BTC_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <cstdlib>
#include <iomanip>

class BitcoinExchange
{
    private:
        std::map<std::string, float> btcData;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& copy);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        ~BitcoinExchange();

        void addData(std::string date, float factor);
        const std::map<std::string, float>& getMap() const;
        
        void fillMap(std::ifstream& file, std::string document);               
        bool checkFormat(std::string line,std::string document, int& counter);
        bool checkDate(std::string line, int& counter);
        bool checkFactor(std::string line);
        bool formatDate(std::string line);
        void insertData(std::string line);
        void executeConv(std::ifstream& file, std::string document);
        void printConv(std::string line, std::string document, int& counter);
};

#endif