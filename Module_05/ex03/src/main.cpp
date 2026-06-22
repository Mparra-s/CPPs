/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:52:19 by mparra-s          #+#    #+#             */
/*   Updated: 2026/02/25 13:13:34 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/Intern.hpp"

int main(void)
{
    Intern someRandomIntern;
    Bureaucrat buro("Conrad", 1);
    AForm* rrf;

    std::cout << std::endl;
    std::cout << "<<======== Shrubbery Form ========>>" << std::endl;
    std::cout << std::endl;
    try
    {
        rrf = someRandomIntern.makeForm("Shrubbery Creation", "Bender");
        rrf->beSigned(buro);
        rrf->execute(buro);
        delete rrf;
        rrf = NULL;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl; 
        std::cerr << e.what() << std::endl;
        delete rrf;
        rrf = NULL;
    }
    try
    {
        rrf = someRandomIntern.makeForm("Shrubbery creation", "Bender");
        rrf->beSigned(buro);
        rrf->execute(buro);
        delete rrf;
        rrf = NULL;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl; 
        std::cerr << e.what() << std::endl;
        delete rrf;
        rrf = NULL;
    }
    std::cout << std::endl;
    std::cout << "<<======== Robotomy Form ========>>" << std::endl;
    std::cout << std::endl; 
    try
    {
        rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
        rrf->beSigned(buro);
        rrf->execute(buro);
        delete rrf;
        rrf = NULL;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl; 
        std::cerr << e.what() << std::endl;
        delete rrf;
        rrf = NULL;
    }
    try
    {
        rrf = someRandomIntern.makeForm("Robotomy request", "Bender");
        rrf->beSigned(buro);
        rrf->execute(buro);
        delete rrf;
        rrf = NULL;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl; 
        std::cerr << e.what() << std::endl;
        delete rrf;
        rrf = NULL;
    }
    std::cout << std::endl;
    std::cout << "<<======== Presidential Form ========>>" << std::endl;
    std::cout << std::endl; 
    try
    {
        rrf = someRandomIntern.makeForm("Presidential Pardon", "Bender");
        rrf->beSigned(buro);
        rrf->execute(buro);
        delete rrf;
        rrf = NULL;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl; 
        std::cerr << e.what() << std::endl;
        delete rrf;
        rrf = NULL;
    }
    try
    {
        rrf = someRandomIntern.makeForm("Presidential pardon", "Bender");
        rrf->beSigned(buro);
        rrf->execute(buro);
        delete rrf;
        rrf = NULL;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl; 
        std::cerr << e.what() << std::endl;
        delete rrf;
        rrf = NULL;
    }
    std::cout << std::endl;    
    return (0);
}