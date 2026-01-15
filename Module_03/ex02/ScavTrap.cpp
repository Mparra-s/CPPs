/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 14:51:29 by mparra-s          #+#    #+#             */
/*   Updated: 2025/12/26 15:24:41 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "ScavTrap Default Constructor called" << std::endl;
    this->name = "Generic ScavTrap";
    this->type = "ScavTrap";
    this->hit_points = 100;
    this->max_hit_p = 100;
    this->energy_points = 50;
    this-> attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "ScavTrap Constructor called" << std::endl;
    this->name = name;
    this->type = "ScavTrap";
    this->attack_damage = 20;
    this->hit_points = 100;
    this->max_hit_p = 100;
    this->energy_points = 50;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy){
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap(){
        std::cout << "ScavTrap Destroy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& source){
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    this->name = source.name;
    this->type = source.type;
    this->attack_damage = source.attack_damage;
    this->hit_points = source.hit_points;
    this->max_hit_p = source.hit_points;
    this->energy_points = source.energy_points;
    return(*this);
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode" << std::endl;
}