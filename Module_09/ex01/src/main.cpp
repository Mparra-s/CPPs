/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main .cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 11:40:43 by mparra-s          #+#    #+#             */
/*   Updated: 2026/02/20 11:40:43 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

int main(int argc, char **argv)
{
    RPN calculate;
    std::string line;
    if(argc != 2)
    {
        if(argc > 1)
            std::cerr << "Error: only one input needed" << std::endl;
        else
            std::cerr << "Error: One input needed" << std::endl;
        return(1);
    }
    line = argv[1];
    if(!calculate.createStack(line))
    {
        calculate.errorsLine();
        return (1);
    }
    calculate.calculate();
    return(0);
}