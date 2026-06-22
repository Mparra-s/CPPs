/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 10:54:52 by mparra-s          #+#    #+#             */
/*   Updated: 2026/02/12 15:06:01 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Easyfind.hpp"

int main(void)
{    
    std::vector<int> numbers;               
    int value1 = 12;
    int value2 = 700;                
    for(int i = 0; i < 8; i++)
        numbers.push_back((i + 1) * 3);  
    
    std::cout << "List of numbers: ";
    for(int j = 0; j < 8; j++)
        std::cout << numbers[j] << " ";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Finding number: " << value1 << std::endl;    
    try
    {
        easyfind(numbers, value1);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Finding number: " << value2 << std::endl;
    try
    {
        easyfind(numbers, value2);
    }
    catch(const std::exception &e)
    {
        std::cerr << "\t" << e.what() << std::endl;
    }
    return(0);
}