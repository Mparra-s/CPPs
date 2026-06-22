/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 10:40:33 by mparra-s          #+#    #+#             */
/*   Updated: 2026/02/23 10:40:33 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/BitcoinExchange.hpp"

int main(int argc, char* argv[])
 {
    BitcoinExchange bitcoin;
    if(argc < 2)
    {
        std::cout << "Error: A file to convert should be introduced" << std::endl;
        return(1);
    }
    if(argc > 2)
    {
        std::cout << "Error: Only one file supported" << std::endl;
        return(1);
    }
    std::ifstream file(argv[1]);
    if(file.fail())
    {
        std::cout << "\033[31mError:\033[0m Data file cannot be open" << std::endl;
        return(1);
    }
    std::ifstream file2("data.csv");
    if(file2.fail())
    {
        std::cout << "\033[31mError:\033[0m Data file cannot be open" << std::endl;
        return(1);
    }
    std::string name_file = argv[1];
    name_file = name_file.substr(0);
    std::string name_file2 = "data.csv";
    bitcoin.fillMap(file2, name_file2);
    bitcoin.executeConv(file, name_file);
    return(0);
}