/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:58:23 by mparra-s          #+#    #+#             */
/*   Updated: 2026/02/03 14:50:50 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <cstdlib>

template <typename T>

class Array
{
    private:
        T *elements;
        unsigned int _size;

    public:
        Array() : elements(NULL), _size(0){};
        Array(unsigned int n)
        {
            _size = n;
            elements = new T[n];                   
        }
       
        Array(const Array& copy) : elements(NULL), _size(copy._size)
        {
            elements = new T[_size];
            for(unsigned int i = 0; i < _size; i++)
                elements[i] = copy.elements[i];
        }
        ~Array()
        {
            delete[] elements;            
        }

        Array& operator=(const Array& other)
        {
            if (this != &other)
            {
                delete[] elements;
                _size = other._size;
                elements = new T[_size];
                for(unsigned int i = 0; i < _size; i++)
                    elements[i] = other.elements[i];
            }
            return (*this);           
        }

        
        class InvalidIndex : public std::exception
        {
            public:
                virtual const char *what() const throw();            
        };
        
        T& operator[](int index)
        {
            if (index < 0 || static_cast<unsigned int>(index) >= _size)
                throw InvalidIndex();
            return (elements[index]);            
        }

        unsigned int size() const{
            return (this->_size);
        }
};


template < typename T>

const char *Array<T>::InvalidIndex::what() const throw()
{
    return ("Error: Invalid index");
}

#endif