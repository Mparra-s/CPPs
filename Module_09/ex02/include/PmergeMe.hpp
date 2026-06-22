/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:41:54 by mparra-s          #+#    #+#             */
/*   Updated: 2026/03/04 14:50:18 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <utility>
#include <algorithm>


class PmergeMe
{
    private:
        std::vector<int> vector;
        std::deque<int> deque;
        unsigned t0;
    
    public:
        PmergeMe(int argc, char** argv);
        PmergeMe(const PmergeMe& copy);
        ~PmergeMe();
        
        PmergeMe& operator=(const PmergeMe& other);
        
        bool validateArgument(int argc);
        std::string processArgument(int argc, char** argv);
        void insertArgument(std::string line);
        void sort();
        

        struct Pair
        {
            int small;
            int big;
            Pair(int s, int b) : small(s), big(b){}
        };


        std::vector<Pair> sortPairs(std::vector<Pair>& pairs)
        {
            if(pairs.size() <= 1)
                return (pairs);
                
            int mid = pairs.size() / 2;
            std::vector<Pair> left(pairs.begin(), pairs.begin() + mid);
            std::vector<Pair> right(pairs.begin() + mid, pairs.end());
            
            left = sortPairs(left);
            right = sortPairs(right);
            return (mergePairs(left, right));
        };


        std::vector<Pair> mergePairs(std::vector<Pair>& left, std::vector<Pair>& right)
        {
            size_t i = 0;
            size_t j = 0;
            std::vector<Pair> result;
            
            while(i < left.size() && j < right.size())
            {
                if(left[i].big <= right[j].big)
                    result.push_back(left[i++]);
                else
                    result.push_back(right[j++]);
            }
            while(i < left.size())
                result.push_back(left[i++]);
            while(j < right.size())
                result.push_back(right[j++]);
            return(result);
        };

        
        void makePairsV(std::vector<int>& total, std::vector<Pair>& array);
        std::vector<int> jacobsthalOrderV(int size);
        void binaryInsertionV(std::vector<int>& complete, std::vector<int>& order, std::vector<int>& smalls, std::vector<int>& bigs);
        std::vector<int> algorithmV(const std::vector<int>& total);
        
        
        std::deque<Pair> sortPairsD(std::deque<Pair>& pairs)
        {
            if(pairs.size() <= 1)
                return (pairs);
                
            int mid = pairs.size() / 2;
            std::deque<Pair> left(pairs.begin(), pairs.begin() + mid);
            std::deque<Pair> right(pairs.begin() + mid, pairs.end());
            
            left = sortPairsD(left);
            right = sortPairsD(right);
            return (mergePairsD(left, right));
        };


        std::deque<Pair> mergePairsD(std::deque<Pair>& left, std::deque<Pair>& right)
        {
            size_t i = 0;
            size_t j = 0;
            std::deque<Pair> result;
            
            while(i < left.size() && j < right.size())
            {
                if(left[i].big <= right[j].big)
                    result.push_back(left[i++]);
                else
                    result.push_back(right[j++]);
            }
            while(i < left.size())
                result.push_back(left[i++]);
            while(j < right.size())
                result.push_back(right[j++]);
            return(result);
        };

        
        void makePairsD(std::deque<int>& total, std::deque<Pair>& array);
        std::deque<int> jacobsthalOrderD(int size);
        void binaryInsertionD(std::deque<int>& complete, std::deque<int>& order, std::deque<int>& smalls, std::deque<int>& bigs);
        std::deque<int> algorithmD(const std::deque<int>& total);
  
        template <typename T>
        void printPair(T a)
        {
            for(unsigned int i = 0; i < a.size(); i++)
            {
                std::cout << a[i].small << " ";
                std::cout << a[i].big << " ";
            }
            std::cout << std::endl;
        }

        template <typename T>
        void printVector(T a)
        {
            size_t size;
            size = a.size();
            if (size <= 100)
            {
                for(unsigned int i = 0; i < a.size(); i++)
                    std::cout << a[i] << " ";
                std::cout << std::endl;
            }
            else
            {
                for(unsigned int i = 0; i < 10; i++)
                    std::cout << a[i] << " ";
                std::cout << "(...) ";
                for(unsigned int i = 10; i > 1; i--)
                    std::cout << a[size - i] << " ";
                std::cout << a[size -1] << "." << std::endl;                
            }
        }
    };

#endif