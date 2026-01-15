/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:45:51 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/02 10:36:55 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if(argc < 2)
    {
        std::cout << "Error: you must write 'DEBUG', 'INFO', 'WARNING' or 'ERROR'" << std::endl;
        return(1);
    }
    
    Harl complainer;
    char *str = argv[1];
    std::string level = str;
    
    
    complainer.complain(level);
    return(0);
}