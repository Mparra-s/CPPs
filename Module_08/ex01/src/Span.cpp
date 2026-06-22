/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:33:49 by mparra-s          #+#    #+#             */
/*   Updated: 2026/02/12 15:01:06 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span() : N(0), total(0), numbers(0){}

Span::Span(unsigned int number) : N(number), total(0), numbers(N){}

Span::Span(const Span &copy) : N(copy.N), total(copy.total), numbers(copy.numbers){}

Span::~Span(){}

Span& Span::operator=(const Span &other){
    if(this != &other)
    {
        N = other.N;
        numbers = other.numbers;
        total = other.total;
    }
    return (*this);
}

void Span::addNumber(unsigned int value){
    if(total < N)
        numbers[total++] = value;
    else
        throw arrayFull();
}

int gen()
{
    static int i = 0;
    ++i;
    return ((i*5) + (i + 1));
}

void Span::generateNumbers(unsigned int i)
{
    total = i;                                                                
    if(total == N)
        std::generate_n(numbers.begin(), i, gen); 
    else
        throw arrayShort();
}

int Span::shortestSpan(){
    
    std::vector<int> tmp(numbers.begin(), numbers.begin() + total);
    std::sort(tmp.begin(), tmp.end()); 
    if(total > 1)
    {
        int diff = tmp[1] - tmp[0];
        for(unsigned int i = 0; i < (total - 1); i++)
        {
            if((tmp[i + 1] - tmp[i]) < diff)
                diff = tmp[i + 1] - tmp[i];
        }
        return(diff);
    }
    else
        throw arrayShort();
}

int Span::longestSpan(){
    if(total > 1)
        return((*std::max_element(numbers.begin(), numbers.begin() + total)) - (*std::min_element(numbers.begin(), numbers.begin() + total)));  
    else
        throw arrayShort();
}

void Span::printNumber() const{
    for(unsigned int i = 0; i < total; i++)
        std::cout << numbers[i] << " ";
    std::cout << std::endl;
}

const char *arrayShort::what() const throw(){
    return ("The array of integers is less than 2");
}

const char *arrayFull::what() const throw(){
    return ("The array of integers is full");
}
