/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:52:19 by mparra-s          #+#    #+#             */
/*   Updated: 2026/06/22 15:16:53 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"

int main(void)
{
    srand(time(NULL));
    Bureaucrat buro("Jonas", 150);
    Bureaucrat buro2("Sarah", 100);
    Bureaucrat buro3("Rolad", 50);
    Bureaucrat buro4("Conrad", 5);
    ShrubberyCreationForm Vacunation("Tree");
    RobotomyRequestForm Robotomy("ClapTrap");
    PresidentialPardonForm Execution("Zapp Brannigan");

    std::cout << std::endl;
    
    
    std::cout << "<<=========== Execute Form Shrubbery===========>>" << std::endl;
    std::cout << std::endl;
    try{
        std::cout << Vacunation << std::endl;
        buro.signForm(Vacunation);
        buro.executeForm(Vacunation);
    }
    catch (const std::exception &e)
    {
        std::cout << "Burocrat: " << buro.get_Name()
            << " couldn't execute the Form: " << Vacunation.getName()
            << " because of " << e.what() << std::endl;       
    }
    try{
        std::cout << Vacunation << std::endl;
        buro2.signForm(Vacunation);
        buro2.executeForm(Vacunation);
    }
    catch (const std::exception &e)
    {
        std::cout << "Burocrat: " << buro2.get_Name()
            << " couldn't execute the Form: " << Vacunation.getName()
            << " because of " << e.what() << std::endl;       
    }
    std::cout << std::endl;
    


    
    std::cout << "<<=========== Execute Form Robotomy===========>>" << std::endl;
    std::cout << std::endl;
    try{
        std::cout << Robotomy << std::endl;
        buro4.signForm(Robotomy);
        buro4.executeForm(Robotomy);
    }
    catch (const std::exception &e)
    {
        std::cout << "Burocrat: " << buro4.get_Name()
            << " couldn't execute the Form: " << Robotomy.getName()
            << " because of " << e.what() << std::endl;       
    }
    std::cout << std::endl;

    std::cout << std::endl;
    try{
        std::cout << Robotomy << std::endl;
        buro3.signForm(Robotomy);
        buro3.executeForm(Robotomy);
    }
    catch (const std::exception &e)
    {
        std::cout << "Burocrat: " << buro3.get_Name()
            << " couldn't execute the Form: " << Robotomy.getName()
            << " because of " << e.what() << std::endl;       
    }
    std::cout << std::endl;



    
    std::cout << "<<=========== Execute Form Presidential===========>>" << std::endl;
    std::cout << std::endl;
    
    try{
        std::cout << Execution << std::endl;
        buro4.signForm(Execution);
        buro4.executeForm(Execution);
    }
    catch (const std::exception &e)
    {
        std::cout << "Burocrat: " << buro4.get_Name()
            << " couldn't execute the Form: " << Vacunation.getName()
            << " because of " << e.what() << std::endl;       
    }

    std::cout << std::endl;
    
    try{
        std::cout << Execution << std::endl;
        buro2.signForm(Execution);
        buro2.executeForm(Execution);
    }
    catch (const std::exception &e)
    {
        std::cout << "Burocrat: " << buro2.get_Name()
            << " couldn't execute the Form: " << Vacunation.getName()
            << " because of " << e.what() << std::endl;       
    }

    std::cout << std::endl;
    return (0);
}