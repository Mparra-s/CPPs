/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 09:36:56 by mparra-s          #+#    #+#             */
/*   Updated: 2025/12/23 14:12:25 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    (void)argc;
    Harl complainer;
    char* str = argv[1];
    if(!str || !str[0])
    {
        std::cout << "Error: you must write 'DEBUG', 'INFO', 'WARNING' or 'ERROR'" << std::endl;
        return(1);
    }
    std::string level = str;
    
    complainer.complain(level);
    return(0);    
}