/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:02:28 by mparra-s          #+#    #+#             */
/*   Updated: 2026/06/22 15:45:12 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

int main(void)
{
    MutantStack<int> mstack;
    for(unsigned int i = 0; i < 10; i++)
    {
        int value;
        value = (i + 1) * 3;
        mstack.push(value);
    }
    std::cout << "Inverse order array: ";
    for(unsigned int i = 0; i < 10; i++)
    {
        std::cout << mstack.top() << " ";
        mstack.pop();
    }
    std::cout << std::endl;
    for(unsigned int i = 0; i < 10; i++)
    {
        int value;
        value = (i + 1) * 3;
        mstack.push(value);
    }
    std::cout << std::endl;
    std::cout << "<==== Forward iteration ====>" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "Iterated list: ";
    while(it != ite)
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "<==== Backward iteration ====>" << std::endl;
    MutantStack<int>::reverse_iterator ito = mstack.rbegin();
    MutantStack<int>::reverse_iterator itoe = mstack.rend();
    std::cout << "Iterated list: ";
    while(ito != itoe)
    {
        std::cout << *ito << " ";
        ito++;
    }    
    return (0);
}