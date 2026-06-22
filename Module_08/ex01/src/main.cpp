/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:50:46 by mparra-s          #+#    #+#             */
/*   Updated: 2026/06/22 15:44:16 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int main(void)
{
    Span array(8);
    try
    {
        for(int i = 0; i < 8; i++)
            array.addNumber((i*3 + 1));
        std::cout << "Numbers array: ";
        array.printNumber();
        std::cout << array.longestSpan();
        std::cout << std::endl;
        std::cout << array.shortestSpan();
        std::cout << std::endl;        
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;                
    }

    
    Span array2(10);
    try
    {
        array2.generateNumbers(10);
        std::cout << "Numbers array: ";
        array2.printNumber();
        std::cout << array2.longestSpan();
        std::cout << std::endl;
        std::cout << array2.shortestSpan();
        std::cout << std::endl;        
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;                
    }

    Span array3(2);
    try
    {
        for(int i = 0; i < 8; i++)
            array3.addNumber((i*3 + 1));
        std::cout << "Numbers array: ";
        array3.printNumber();
        std::cout << array3.longestSpan();
        std::cout << std::endl;
        std::cout << array3.shortestSpan();
        std::cout << std::endl;        
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;                
    }

    Span badarray(2);
    try
    {
        for(int i = 0; i < 0; i++)
            badarray.addNumber((i*3 + 1));
        badarray.printNumber();
        std::cout << badarray.longestSpan();
        std::cout << std::endl;
        std::cout << badarray.shortestSpan();
        std::cout << std::endl;        
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;                
    }
        
    return(0);
}