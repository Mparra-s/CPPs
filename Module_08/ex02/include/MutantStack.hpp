/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:04:27 by mparra-s          #+#    #+#             */
/*   Updated: 2026/02/12 15:03:49 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <deque>


template <typename T>


class MutantStack : public std::stack<T>
{
    public:

        MutantStack(){};
        MutantStack(const MutantStack& copy) : std::stack<T>(copy){}; 
        ~MutantStack(){};

        MutantStack& operator=(const MutantStack& other)
        {
            std::stack<T>::operator=(other);    
            return(*this);
        };

        
        typedef std::stack<T> stack;                                                      
        typedef typename stack::container_type container;                                   
        
        
      
        typedef typename container::iterator                iterator;                       
        typedef typename container::const_iterator          const_iterator;                 
        typedef typename container::reverse_iterator        reverse_iterator;               
        typedef typename container::const_reverse_iterator  const_reverse_iterator;         
        
        iterator begin(){
            return(this->c.begin());                                                       
        }
        
        iterator end(){
            return(this->c.end());
        }
        
        const_iterator begin() const{
            return(this->c.begin());
        }
        
        const_iterator end() const{
            return(this->c.end());
        }
        
        reverse_iterator rbegin(){
            return(this->c.rbegin());
        }
        
        reverse_iterator rend(){
            return(this->c.rend());
        }
        
        const_reverse_iterator rbegin() const{
            return(this->c.rbegin());
        }
        
        const_reverse_iterator rend() const{
            return(this->c.rend());
        }
};


#endif