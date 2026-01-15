/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 09:39:13 by mparra-s          #+#    #+#             */
/*   Updated: 2025/12/30 10:18:49 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(void)
{
    std::cout << " [ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese";
    std::cout << "-triple-pickle-specialketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!";
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
    std::cout << "years, whereas you started working here just last month." << std::endl;
    std::cout << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}
int string_level(std::string level)
{
    if(level == "DEBUG")
        return(1);
    if(level == "INFO")
        return(2);
    if(level == "WARNING")
        return(3);
    if(level == "ERROR")
        return(4);
    else
        return(-1);
}

void Harl::complain(std::string level)
{
    int chosen_level;
    
    chosen_level = string_level(level);
    switch(chosen_level)
    {
        case 1:
            Harl::debug();
        case 2:
            Harl::info();
        case 3:
            Harl::warning();
        case 4:
            Harl::error();
            break ;
        case -1:
            std::cout << " Probably complaining about insignificant problems " << std::endl;
            break ;
    }
}
