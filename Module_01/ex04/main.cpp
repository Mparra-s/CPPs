/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:40:17 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/02 10:33:31 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char** argv)
{        
    if(argc != 4)
    {
        std::cout << "Error:: you must enter a file and two strings" << std::endl;
        return(1);
    }
    
    std::stringstream buffer;
    std::string file_i = argv[1];
    std::ifstream file(file_i.c_str());
    std::string content;

    if(!file)
    {
        std::cout << "Error: the file cannot be open" << std::endl;
        return(1);
    }
    
    std::string s1 = argv[2];
    if(s1.empty())
    {
        std::cout << "Error: empty parameter to change" << std::endl;
        return (1);
    }  
    std::string s2 = argv[3];
    size_t pos = 0;

    buffer << file.rdbuf();
    content = buffer.str();

    while((pos = content.find(s1, pos)) != std::string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }

    std::ostringstream file_output;
    file_output << file_i << ".replace";
    std::ofstream outfile(file_output.str().c_str());
    if(!outfile)
    {
        std::cout << "Error: the outfile couldn't be created" << std::endl;
        return(1); 
    }
    outfile << content;   

    file.close();
    return(0);
}