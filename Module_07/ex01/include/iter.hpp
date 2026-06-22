/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:27:23 by mparra-s          #+#    #+#             */
/*   Updated: 2026/02/03 14:24:17 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>

void iter(T *array, size_t value, void (*func)(T&))
{
    for(size_t i = 0; i < value; i++)
        func(array[i]);
}

template <typename T>

void iter(T *array, size_t value, void (*func)(const T&))
{
    for(size_t i = 0; i < value; i++)
        func(array[i]);
}



#endif