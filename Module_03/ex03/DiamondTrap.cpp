/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 09:35:04 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/07 12:25:57 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() : ClapTrap("DefaultDT_clap_name"){
    std::cout << "DiamondTrap Default Constructor called" << std::endl;
    this->type = "DiamondTrap";
    this->name = "DiamondTrap";
    this->attack_damage = 30;
    this->hit_points = 100;
    this->max_hit_p = 100;
    this->energy_points = 50;    
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"){
    std::cout << "DiamondTrap Constructor called" << std::endl;
    this->attack_damage = 30;
    this->type = "DiamondTrap";
    this->name = name;
    this->hit_points = 100;
    this->max_hit_p = 100;
    this->energy_points = 50; 
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy){
    std::cout << "DiamondTrap Constructor Copy called" << std::endl;
    *this = copy; 
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap Destroy Constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& source){
    this->name = source.name;
    this->type = source.type;
    this->attack_damage = source.attack_damage;
    this->hit_points = source.hit_points;
    this->max_hit_p = source.max_hit_p;
    this->energy_points = source.energy_points;
    std::cout << "DiamondTrap Assignation operator called" << std::endl;
    return(*this);   
}

void DiamondTrap::attack(const std::string& target){
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
    std::cout << "I am DiamondTrap: My name is " << DiamondTrap::name <<
	" and my father is the ClapTrap named " << ClapTrap::name << "." <<
	std::endl;
}
