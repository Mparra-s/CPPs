/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:42:58 by mparra-s          #+#    #+#             */
/*   Updated: 2026/02/03 14:22:06 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>


template <typename T>

void swap(T &x, T &y)
{
    T temporal;
    
    temporal = x;
    x = y;
    y = temporal;
}

template <typename T>
T min(T x, T y)
{
    return(x < y) ? x : y; 
}

template <typename T>
T max(T x, T y)
{
    return(x > y) ? x : y;
}

#endif