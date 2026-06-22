/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 10:32:32 by mparra-s          #+#    #+#             */
/*   Updated: 2026/02/12 14:58:26 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <vector>


class NotFound : public std::exception
{
    public:
        virtual const char *what() const throw();
};

const char *NotFound::what() const throw()
{
    return("The number couldn't be found");    
}


template < typename T>

void easyfind(T integers, int number)
{
    std::vector<int>::iterator it;                            
    
    it = find(integers.begin(), integers.end(), number);
    if(it != integers.end())                                   
        std::cout << "\t Number " << integers[distance(integers.begin(), it)] << " found in position: " << distance(integers.begin(), it) + 1;
    else
        throw NotFound();
}
#endif