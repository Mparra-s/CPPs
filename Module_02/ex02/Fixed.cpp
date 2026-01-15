/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:06:18 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/05 12:38:42 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_b_number = 8;



/*****************************************************************************/
/*      Canonical Orthodox Form                                              */
/*****************************************************************************/

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

Fixed::Fixed(const int i_number){
    std::cout << "Int constructor called" << std::endl;
    _f_pnumber = i_number << _b_number;
}

Fixed::Fixed(const float f_number){
    std::cout << "Float constructor called" << std::endl;
    _f_pnumber = roundf(f_number * (1 << _b_number));
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}



/*****************************************************************************/
/*      Setter and Getters                                                   */
/*****************************************************************************/

void Fixed::setRawBits(int const raw){
    _f_pnumber = raw;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (_f_pnumber);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fnumber){    
    out << fnumber.toFloat();
    return(out);
}


/*****************************************************************************/
/*      Funciones públicas                                                   */
/*****************************************************************************/


float	Fixed::toFloat(void)const
{
    float value;

    value = (float)this->_f_pnumber / (float)(1 << this->_b_number);
	return (value);
}

int	Fixed::toInt(void)const
{
    int value;

    value = this->_f_pnumber >> this->_b_number;
	return (value);
}



/*****************************************************************************/
/*      Overload Comparison operators                                       */
/*****************************************************************************/

bool Fixed::operator>(Fixed const &other) const{
    if(this->_f_pnumber > other._f_pnumber)
        return(true);
    return(false);
}

bool Fixed::operator<(Fixed const &other) const{
    if(this->_f_pnumber < other._f_pnumber)
        return(true);
    return(false);
}

bool Fixed::operator>=(Fixed const &other) const{
    if(this->_f_pnumber >= other._f_pnumber)
        return(true);
    return(false);
}

bool Fixed::operator<=(Fixed const &other) const{
    if(this->_f_pnumber <= other._f_pnumber)
        return(true);
    return(false);
}

bool Fixed::operator==(Fixed const &other) const{
    if(this->_f_pnumber == other._f_pnumber)
        return(true);
    return(false);
}
bool Fixed::operator!=(Fixed const &other) const{
    if(this->_f_pnumber != other._f_pnumber)
        return(true);
    return(false);
}




/*****************************************************************************/
/*      Overload Arithmetic Operators                                        */
/*****************************************************************************/

Fixed Fixed::operator+(Fixed const &other) const{
    float value;
    
    value = this->toFloat() + other.toFloat();
    return(value);   
}

Fixed Fixed::operator-(Fixed const &other) const{
    float value;
    
    value = this->toFloat() - other.toFloat();
    return(value);
}

Fixed Fixed::operator*(Fixed const &other) const{
    float value;
    
    value = this->toFloat() * other.toFloat();
    return(value);
}

Fixed Fixed::operator/(Fixed const &other) const{
    float value;

    value = this->toFloat() / other.toFloat();
    return(value);
}


/*****************************************************************************/
/*      Overload Increment and Decrement Operators                           */
/*****************************************************************************/

Fixed &Fixed::operator++(){
    this->_f_pnumber++;
    return(*this);
}

Fixed &Fixed::operator--(){
    this->_f_pnumber--;
    return(*this);
}

Fixed Fixed::operator++(int){
    Fixed temp(*this);
    _f_pnumber++;
    return(temp);
}

Fixed Fixed::operator--(int){
    Fixed temp(*this);
    _f_pnumber--;
    return(temp);
}


/*****************************************************************************/
/*      Overload Min and Max                                                 */
/*****************************************************************************/

Fixed &Fixed::min(Fixed &number, Fixed &other){
    if(number >= other)
        return(other);
    else
        return(number);
}

Fixed &Fixed::max(Fixed &number, Fixed &other){
    if(number >= other)
        return(number);
    else
        return(other);
}

const Fixed &Fixed::min(const Fixed &number, const Fixed &other){
    if(number >= other)
        return(other);
    else
        return(number);    
}

const Fixed &Fixed::max(const Fixed &number, const Fixed &other){
    if(number >= other)
        return(number);
    else
        return(other);
}


