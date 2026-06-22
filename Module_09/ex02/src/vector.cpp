/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:42:17 by mparra-s          #+#    #+#             */
/*   Updated: 2026/03/04 14:49:15 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"


void PmergeMe::makePairsV(std::vector<int>& total, std::vector<Pair>& array)
{
    for(unsigned int i = 0; i + 1 < total.size(); i += 2)
    {
        if(total[i] > total [i + 1])
        {
            std::swap(total[i], total[i + 1]);
            array.push_back(Pair(total[i], total[i + 1]));                    
        }
        else
            array.push_back(Pair(total[i], total[i + 1]));
    }          
}

        
std::vector<int> PmergeMe::jacobsthalOrderV(int size)
{
    std::vector<int> order;
    int value;
    
    order.push_back(1);
    order.push_back(3);
    while(order.back() < size)
    {
        value = order[order.size() -1] + 2*order[order.size() - 2];
        order.push_back(value);
    }
    int prev = 0;
    int current;
    std::vector<int> result;
    for(size_t i = 0; i < order.size(); i++)
    {
        current = order[i];
        if(current > size)
            current = size;
        for(int idx = current; idx > prev; idx--)
            result.push_back(idx - 1);
        prev = order[i];
        if(prev >= size)
            break ;
    }        
    return(result);
}


void PmergeMe::binaryInsertionV(std::vector<int>& complete, std::vector<int>& order, std::vector<int>& smalls, std::vector<int>& bigs)
{
    std::vector<int>::iterator it;
    std::vector<int> pos(bigs.size());
    int p;
    
    for(unsigned int i = 0; i < bigs.size(); i++)
        pos[i] = i + 1;
    for(unsigned int i = 1; i < order.size(); i++)
    {          
        it = lower_bound(complete.begin(), complete.begin() + pos[order[i]], smalls[order[i]]);
        p = it - complete.begin(); 
        complete.insert(it, smalls[order[i]]);
        for(unsigned j = 0; j < bigs.size(); j++)
            if(pos[j] >= p)
                pos[j]++; 
    }
    if(order.size() != smalls.size())
    {
        it = lower_bound(complete.begin(), complete.end(), smalls[smalls.size() - 1]);
        complete.insert(it, smalls[smalls.size() - 1]);
    }
}
        
std::vector<int> PmergeMe::algorithmV(const std::vector<int>& total)                      
{
    std::vector<int> temp = total;
    std::vector<Pair> array;
    std::vector<int> bigs;
    std::vector<int> smalls;
    std::vector<int> order;
    std::vector<int> complete;
    
    makePairsV(temp, array);
    array = sortPairs(array);                            
    for(unsigned int i = 0; i < array.size(); i++)
        bigs.push_back(array[i].big);
    for(unsigned int i = 0; i < array.size(); i++)
        smalls.push_back(array[i].small);
    if(total.size() % 2 != 0)
        smalls.push_back(total[total.size() - 1]);
    complete.push_back(smalls[0]);
    for(unsigned int i = 0; i < bigs.size(); i++)
        complete.push_back(bigs[i]);
    if(total.size() % 2 == 0)
        order = jacobsthalOrderV(smalls.size());
    else
        order = jacobsthalOrderV(smalls.size() - 1);
    binaryInsertionV(complete, order, smalls, bigs);            
    return(complete);            
}