/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:06:11 by mparra-s          #+#    #+#             */
/*   Updated: 2025/12/23 15:23:29 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _f_pnumber;
        static const int _b_number;
    
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int i_number);
        Fixed(const float f_number);
        Fixed &operator=(const Fixed &other);
        ~Fixed();
    
        // Setter and Getter;
        void  setRawBits(int const raw);
        int getRawBits(void) const; 

        // Funciones para pasar a float o a int.
        float toFloat(void) const;
        int toInt(void) const; 
        
        // Funciones para sobrecargar operadores comparativos.
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;

        // Funciones para sobrecargar operadores aritméticos.  TIENEN QUE DEVOLVER UN FIXED Y NO UN FLOAT O INT.
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;

        // Funciones para sobrecargar incrementadores y disminuidores.
        // Previas
        Fixed &operator++();
        Fixed &operator--();
        // Posteriores
        Fixed operator++(int);
        Fixed operator--(int);

        // Funciones para sobrecargar máximo y mínimos
        static Fixed &min(Fixed &number, Fixed &other);
        static Fixed &max(Fixed &number, Fixed &other);
        static const Fixed &min(const Fixed &number, const Fixed &other);
        static const Fixed &max(const Fixed &number, const Fixed &other);
};

std::ostream &operator <<(std::ostream &out, Fixed const &float_number);
    
#endif