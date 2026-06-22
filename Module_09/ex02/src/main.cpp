/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 18:01:44 by mparra-s          #+#    #+#             */
/*   Updated: 2026/03/04 15:43:36 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../include/PmergeMe.hpp"

int main(int argc, char**argv)
{
    try{
        PmergeMe prueba(argc, argv);
        prueba.sort();
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return(0);
}