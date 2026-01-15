/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:52:59 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/02 10:18:25 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){};

void Zombie::setZombieName(std::string name){
    this->z_name = name;
    std::cout << z_name << " : has been created" << std::endl;
}

void Zombie::announce()
{
    std::cout << z_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << z_name << " : has been destroyed" << std::endl;
}