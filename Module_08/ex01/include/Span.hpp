/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:28:05 by mparra-s          #+#    #+#             */
/*   Updated: 2026/02/11 16:38:31 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>


class arrayFull : public std::exception
{
    public:
        virtual const char *what() const throw();
};

class arrayShort : public std::exception
{
    public:
        virtual const char *what() const throw();
};

class Span
{
    private:
        unsigned int N;
        unsigned int total;
        std::vector<int> numbers;
        
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& copy);
        ~Span();

        Span& operator=(const Span& other);
        
        void addNumber(unsigned int number);
        int shortestSpan();
        int longestSpan();
        void generateNumbers(unsigned int i);
        
        void printNumber() const;
};

#endif