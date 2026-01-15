/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:53:42 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/05 10:12:41 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>


int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE LOUD NOISE *" << std::endl;
    if(argc > 1)
    {
        while(argv[i])
        {
            std::string sentence = argv[i];
            std::string SENTENCE = "";
            j = 0;
            while(j < sentence.length())
            {
                SENTENCE += std::toupper(sentence[j]);
                j++;
            }
            std::cout << SENTENCE;
            if (argv[i + 1])
                std::cout <<  " ";
            i++; 
        }
        std::cout << std::endl;
    }
    return(0);
}