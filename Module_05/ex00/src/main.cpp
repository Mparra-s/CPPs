/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:52:19 by mparra-s          #+#    #+#             */
/*   Updated: 2026/06/22 15:06:05 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main(void)
{
    std::cout << "Regular bureaucrat" << std::endl;
    try
    {
        Bureaucrat Buro1("Thomas", 15);
        std::cout << "Name: " << Buro1.get_Name() << ". Bureaucrat grade: " << Buro1.get_Grade() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl; 
    
    std::cout << "Bureaucrat above 1" << std::endl;
    try
    {
        Bureaucrat Buro1("Rose", -5);
        std::cout << "Name: " << Buro1.get_Name() << ". Bureaucrat grade: " << Buro1.get_Grade() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;     
    
    std::cout << "Bureaucrat below grade 150" << std::endl;
    try
    {
        Bureaucrat Buro1("Raul", 400);
        std::cout << "Name: " << Buro1.get_Name() << ". Bureaucrat grade: " << Buro1.get_Grade() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;    
    
    std::cout << "Bureaucrate where we increase and decrease one grade" << std::endl;
    try
    {
        Bureaucrat Buro1("Laura", 15);
        std::cout << "Name: " << Buro1.get_Name() << ". Bureaucrat grade: " << Buro1.get_Grade() << std::endl;
        std::cout << std::endl;
        std::cout << "Decreasing one grade" << std::endl;
        Buro1.decrease_Grade();
        std::cout << "Name: " << Buro1.get_Name() << ". Bureaucrat grade: " << Buro1.get_Grade() << std::endl;
        std::cout << std::endl;
        std::cout << "Increasing one grade" << std::endl;
        Buro1.increase_Grade();
        std::cout << "Name: " << Buro1.get_Name() << ". Bureaucrat grade: " << Buro1.get_Grade() << std::endl;
        std::cout << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Bureaucrat where we decrease the grade below 150" << std::endl;
    try
    {
        Bureaucrat Buro1("Saul", 150);
        std::cout << "Name: " << Buro1.get_Name() << ". Bureaucrat grade: " << Buro1.get_Grade() << std::endl;
        std::cout << std::endl;
        std::cout << "Decreasing one grade" << std::endl;
        Buro1.decrease_Grade();
        std::cout << "Name: " << Buro1.get_Name() << ". Bureaucrat grade: " << Buro1.get_Grade() << std::endl;
        std::cout << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Bureaucrat where we increment the grade below 1" << std::endl;
    try
    {
        Bureaucrat Buro1("Maria", 1);
        std::cout << "Name: " << Buro1.get_Name() << ". Bureaucrat grade: " << Buro1.get_Grade() << std::endl;
        std::cout << std::endl;
        std::cout << "Increasing one grade" << std::endl;
        Buro1.increase_Grade();
        std::cout << "Name: " << Buro1.get_Name() << ". Bureaucrat grade: " << Buro1.get_Grade() << std::endl;
        std::cout << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
}