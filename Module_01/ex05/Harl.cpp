/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:46:08 by mparra-s          #+#    #+#             */
/*   Updated: 2025/12/30 10:13:58 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!";
    std::cout << " If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
    std::cout << " years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int string_level(std::string level)
{
    if(level == "DEBUG")
        return(0);
    if(level == "INFO")
        return(1);
    if(level == "WARNING")
        return(2);
    if(level == "ERROR")
        return(3);
    return(-1);        
}

void Harl::complain(std::string level)
{
    void(Harl::*complain_level[4])()={&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    int chosen_level;
    
    chosen_level = string_level(level);
    if(chosen_level == -1)
    {
        std::cout << "Error: modes should be DEBUG, INFO, WARNING or ERROR " << std::endl;
        return ;
    }
    (this->*complain_level[chosen_level])();
}