/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:52:19 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/20 10:59:45 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main(void)
{
    Bureaucrat Vet("Marie", 100);
    Bureaucrat Pol("Conrad", 150);
    Bureaucrat Pol2("Julie", 1);
    Form Generic("Standard", 50, 130, false);
    Form Vacunation("Vacunation", 50, 70, false);

    try
    {
        std::cout << Generic << std::endl;
        Generic.beSigned(Vet);
        std::cout << Generic << std::endl;
        std::cout << std::endl;
        std::cout << Vacunation << std::endl;
        Vet.signForm(Vacunation);
        Vet.increase_Grade();
        std::cout << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout <<Vet.get_Name() << "couldn't sign "
                  << Generic.getName()
                  << " because " << e.what()
                  << std::endl;
    }

    try
    {
        std::cout << Pol << std::endl;
        Pol.decrease_Grade();
        std::cout << Pol << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout <<Pol.get_Name() << " couldn't get demoted "
                  << "because " << e.what()
                  << std::endl;
    }

        try
    {
        std::cout << Pol2 << std::endl;
        Pol2.increase_Grade();
        std::cout << Pol2 << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout <<Pol2.get_Name() << " couldn't get promoted "
                  << "because " << e.what()
                  << std::endl;
    }

    return (0);
}