/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:06:00 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/05 12:36:50 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b;
    Fixed temp;
    Fixed post;
    Fixed const x(Fixed(872.23f));
    Fixed const y(Fixed(982.4f));
    
    a = Fixed(1234.4321f);
    b = Fixed(980.09f);
    temp = a;
    post = a;

    std::cout << std::endl;
    
    /*****************************************************************************/
    /*      Prueba sobrecarga operadores de comparación                          */
    /*****************************************************************************/
    
    std::cout << "Sobrecarga de operadores de comparación" << std::endl;
    if(a > b)
        std::cout << "   a es mayor que b" << std::endl;
    else
        std::cout << "   Error: a es menor que b" << std::endl;
    if(a < b)
        std::cout << "   a es menor que b" << std::endl;
    else
        std::cout << "   Error: a es mayor que b" << std::endl;
    if(a >= b)
        std::cout << "   a es mayor o igual que b" << std::endl;
    else
        std::cout << "   Error: a es menor que b" << std::endl;
    if(a <= b)
        std::cout << "   a es menor o igual que b" << std::endl;
    else
        std::cout << "   Error: a es mayor que b" << std::endl;
    if(a == b)
        std::cout << "   a es igual que b" << std::endl;
    else
        std::cout << "   Error: a es distinto que b" << std::endl;
    if(a != b)
        std::cout << "   a es distinto que b" << std::endl;
    else
        std::cout << "   Error: a igual que b" << std::endl;

    std::cout << std::endl;
    
    /*****************************************************************************/
    /*      Prueba sobrecarga operadores matemáticos                             */
    /*****************************************************************************/
    
    std::cout << "Sobrecarga de operadores matemáticos" << std::endl;
    std::cout << "   Suma de operadores: " << a + b << std::endl;
    std::cout << "   Resta de operadores: " << a - b << std::endl;
    std::cout << "   Producto de operadores: " << a * b << std::endl;
    std::cout << "   Cociente de operadores: " << a / b << std::endl;

    std::cout << std::endl;

    /*****************************************************************************/
    /*      Prueba sobrecarga incrementadores y disminuidores                    */
    /*****************************************************************************/
    
    std::cout << "Sobrecarga de incrementadores y disminuidores" << std::endl;

    // Pre-incremento
    temp = a;
    Fixed preInc = ++temp;
    std::cout << "Pre-incremento:" << std::endl;
    std::cout << "  Antes: " << a << "  Después: " << preInc << "  Temp final: " << temp << std::endl;

    // Post-incremento
    temp = a;
    Fixed postInc = temp++;
    std::cout << "Post-incremento:" << std::endl;
    std::cout << "  Antes: " << a << "  Devuelto: " << postInc << "  Temp final: " << temp << std::endl;

    // Pre-decremento
    temp = b;
    Fixed preDec = --temp;
    std::cout << "Pre-decremento:" << std::endl;
    std::cout << "  Antes: " << b << "  Después: " << preDec << "  Temp final: " << temp << std::endl;

    // Post-decremento
    temp = b;
    Fixed postDec = temp--;
    std::cout << "Post-decremento:" << std::endl;
    std::cout << "   Antes: " << b << "  Devuelto: " << postDec << "  Temp final: " << temp << std::endl;

    std::cout << std::endl;


    /*****************************************************************************/
    /*      Prueba sobrecarga máximo y mínimo                                    */
    /*****************************************************************************/

    // Extremos con Fixed Point-Numbers.
    
    std::cout << "Prueba sobrecarga máximos y mínimos" << std::endl;
    std::cout << "   Máximo entre Fixed A y Fixed B: " << Fixed::max(a, b) << std::endl;
    std::cout << "   Mínimo entre Fixed A y Fixed B: " << Fixed::min(a, b) << std::endl;

    // Extremos con const Fixed Point-Numbers.
    
    std::cout << "Prueba sobrecarga máximos y mínimos con Const Fixed" << std::endl;    
    std::cout << "   Máximo entre Fixed A y Fixed B: " << Fixed::max(x, y) << std::endl;
    std::cout << "   Mínimo entre Fixed A y Fixed B: " << Fixed::min(x, y) << std::endl;
        
    return 0;
}