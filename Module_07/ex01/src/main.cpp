/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:10:44 by mparra-s          #+#    #+#             */
/*   Updated: 2026/06/22 15:39:41 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

void print_str(const char &letter)
{
    std::cout << letter;
}

void cube_d(double &number)
{
    double cube = number * number * number;
    std::cout << "Doubles: " << cube << "/  ";
}

void cube_f(float &number)
{
    float cube = number * number * number;
    std::cout << "Float: " << cube << "/  ";
}

void cube(const int &number)
{
    int cube = number * number * number;
    std::cout << "Int: " << cube << "/  ";
}

void toupper(char &letter)
{
    letter = std::toupper(letter);
    std::cout << letter;
}

int main(void)
{
    
    std::cout << "<===== Ints test =====>" << std::endl;
    int numbers[] = {2, 3, 5, 6};
    double numbers2[] = {1.6, 3.5, 5.67, 8.123};
    float numbers3[] = {4.23, 3.76, 8.12, 3.54};
    
    iter(numbers, 4, cube);
    std::cout << std::endl;
    iter(numbers2, 4, cube_d);
    std::cout << std::endl;
    iter(numbers3, 4, cube_f);
    std::cout << std::endl;
    std::cout << std::endl;


    std::cout << "<===== Char test =====>" << std::endl;
    char sentence[] = "Hello World";
    char sentence2[] = "Bye Universe";
    
    iter(sentence, 10, toupper);
    std::cout << std::endl;
    iter(sentence2, 8, toupper);
    std::cout << std::endl;
    iter(sentence, 10, print_str);
    std::cout << std::endl;

    return(0);    
}