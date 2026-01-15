/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:06:11 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/05 12:18:29 by mparra-s         ###   ########.fr       */
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
        Fixed(const int i_number);
        Fixed(const float f_number);
        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &other);
        ~Fixed();

        void setRawBits(int const raw);       
        int getRawBits(void) const;
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator <<(std::ostream &out, Fixed const &float_number);
    
#endif