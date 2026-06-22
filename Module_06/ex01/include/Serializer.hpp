/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:31:33 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/29 15:31:33 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <stdint.h>
#include <string>
#include <iostream>


typedef struct Data
{
    std::string name;

} Data;


class Serializer
{
    private:

    public:
        Serializer();
        Serializer(const Serializer& copy);
        ~Serializer();
        
        Serializer& operator=(const Serializer& other);
        static uintptr_t serialize(Data *ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif