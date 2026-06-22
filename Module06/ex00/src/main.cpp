/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 11:38:27 by mparra-s          #+#    #+#             */
/*   Updated: 2026/06/22 15:22:45 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        std::cout << "Is needed only 1 argument" << std::endl;
        return(0);
    }
    ScalarConverter::convert(argv[1]);
    std::cout << std::endl;
 
    return 0;
}