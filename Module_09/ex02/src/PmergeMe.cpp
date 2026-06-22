/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:41:45 by mparra-s          #+#    #+#             */
/*   Updated: 2026/03/12 11:38:10 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"


PmergeMe::PmergeMe(int argc, char** argv){
    t0 = clock();
    std::string line;
    if(argc < 2)
        throw std::runtime_error("Error: A list of integers is needed");
    line = processArgument(argc, argv);
    insertArgument(line);
}

PmergeMe::PmergeMe(const PmergeMe& copy) : vector(copy.vector), deque(copy.deque){}

PmergeMe::~PmergeMe(){}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if(this != &other)
    {
        vector = other.vector;
        deque = other.deque;
    }
    return(*this);    
}


bool isNumber(std::string token)
{
    int number;
    std::stringstream check(token);
    check >> number;
    if(check.fail() || number < 0)
    {
        std::cerr << "Error: only positive integers are accepted as arguments" << std::endl;
        return(0);
    }
    return 1;
}


std::string PmergeMe::processArgument(int argc, char** argv)
{
    std::string line;
    for(int i = 1; i < argc; i++)
    {
        line.append(argv[i]);
        line.append(" ");
    }
    int size = 0;
    for(unsigned int i= 1; i < line.length(); i++)
    {
        if((std::isdigit(line[i])))
            size += 1;        
    }
    if(size < 2)
        throw std::runtime_error("Not enough numbers to order"); 
    return(line); 
}


void PmergeMe::insertArgument(std::string line)
{
    std::istringstream argument(line);
    std::string token;
    while(argument >> token)
    {
        if(!isNumber(token))
            return ;
        vector.push_back(std::atof(token.c_str()));
        deque.push_back(std::atof(token.c_str()));
    }
    std::cout << "Before: ";
    printVector(vector);
}



void PmergeMe::sort()
{
    std::vector<int> total_v = vector;
    std::deque<int> total_d = deque;
    unsigned t1;
    double time_v;
    double time_d;
    
    t0 = clock();
    vector = algorithmV(total_v);
    t1 = clock();
    time_v = (double(t1 - t0)/CLOCKS_PER_SEC * 1000);
    t0 = clock();
    deque = algorithmD(total_d);
    t1 = clock();
    time_d = (double(t1 - t0)/CLOCKS_PER_SEC * 1000);
    std::cout << "After: ";
    printVector(vector);
    std::cout << "Time to process a range of " << vector.size() << " elements with std::vector : " << std::fixed << time_v << " ms" <<std::endl;
    std::cout << "Time to process a range of " << vector.size() << " elements with std::deque : " << time_d << " ms" << std::endl;
}