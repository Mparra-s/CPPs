/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:50:34 by mparra-s          #+#    #+#             */
/*   Updated: 2025/12/29 10:27:28 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contacts.hpp"
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cctype>

class Phonebook
{
    private:
        Contact contacts[8];
        int contact_count;               //Como tengo el constructor abajo aquí podría inicializar las variables directamente.
        int total_contact;
    public:
        Phonebook();                    //Uso el constructor para inicializar las variables definidas en Private. Se puede usar para más cosas pero aún no se.
        void ADD();
        void SEARCH() const;
        std::string Truncate(std::string str) const;
};

#endif