/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:22:34 by mparra-s          #+#    #+#             */
/*   Updated: 2025/11/05 12:00:52 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type){}

Weapon::~Weapon(){}

void Weapon::setWeapon(std::string name)
{
    this->type = name;
}

const std::string &Weapon::getWeapon() const
{
    return(type);    
}