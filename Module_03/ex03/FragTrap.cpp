/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 09:34:17 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/07 12:31:56 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    std::cout << "FragTrap Default Constructor called" << std::endl;
    this->type = "FragTrap";
    this->attack_damage = 30;
    this->hit_points = 100;
    this->max_hit_p = 100;
    this->energy_points = 100;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    std::cout << "FragTrap Constructor called" << std::endl;
    this->type = "FragTrap";
    this->attack_damage = 30;
    this->hit_points = 100;
    this->max_hit_p = 100;
    this->energy_points = 100;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy){
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = copy;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Destroy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& source){
    this->type = source.type;
    this->attack_damage = source.attack_damage;
    this->hit_points = source.hit_points;
    this->max_hit_p = source.max_hit_p;
    this->energy_points = source.energy_points;
    std::cout << "FragTrap Assignation operator called" << std::endl;
    return(*this);
}

void FragTrap::highFiveGuys(void){
    std::cout << this->type << " " << this->name << " says: High five, guys!" << std::endl;
}