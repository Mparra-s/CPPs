/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:31:46 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/29 15:31:46 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../include/Serializer.hpp"

Serializer::Serializer(){}

Serializer::Serializer(const Serializer& copy){(void)copy;}

Serializer& Serializer::operator=(const Serializer& other){
    (void)other;
    return (*this);
}

Serializer::~Serializer(){}

uintptr_t Serializer::serialize(Data *ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw){
    return (reinterpret_cast<Data*>(raw));
}
