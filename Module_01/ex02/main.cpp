/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:00:37 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/02 10:23:05 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>


int main(void)
{
    std::string sentence = "HI THIS IS BRAIN";                  
    std::string *stringPTR;                                     
    std::string& stringREF = sentence;                          

    stringPTR = &sentence;
    
    std::cout << "Dirección de memoria de la variable: " << &sentence << std::endl;                     
    std::cout << "Dirección de memoria de PTR: " << stringPTR << std::endl;                             
    std::cout << "Dirección de memoria de REF: " << &stringREF << std::endl << std::endl << std::endl; 
    
    std::cout << "Valor de la variable: " << sentence << std::endl;
    std::cout << "Valor de PTR: " << *stringPTR << std::endl;
    std::cout << "Valor de REF: " << stringREF << std::endl;
    return(0);
}