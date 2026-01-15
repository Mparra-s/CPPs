/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:16:54 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/02 10:54:08 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string human, Weapon &weapon) : name(human), weap(weapon){}

HumanA::~HumanA(){}

void HumanA::attack()
{
    
    std::cout << name << " attacks with their " << weap.getWeapon() << std::endl;    
}


