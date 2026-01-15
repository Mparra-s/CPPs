/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:06:18 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/05 12:13:53 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_b_number = 8;

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    _f_pnumber = 0;
}

Fixed::Fixed(const Fixed &other) : _f_pnumber(other._f_pnumber){
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other){
    std::cout << "Copy assigment operator called" << std::endl;
    if(this != &other)
        _f_pnumber = other._f_pnumber;
    return(*this);
}

void Fixed::setRawBits(int const raw)
{
    _f_pnumber = raw;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return(_f_pnumber);    
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}
