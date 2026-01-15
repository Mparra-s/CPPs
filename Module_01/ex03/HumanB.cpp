/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:23:02 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/02 10:57:40 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weap = NULL;
}

void HumanB::setHumanWeaponB(Weapon &name)
{
    this->weap = &name;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
    if(!weap)
       std::cout << name << " attacks with his fist" << std::endl;
    else 
        std::cout << name << " attacks with their " << weap->getWeapon() << std::endl;    
}