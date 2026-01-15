/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:20:28 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/07 11:54:02 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


/*****************************************************************************/
/*      Canonical Orthodox Form                                              */
/*****************************************************************************/

ClapTrap::ClapTrap(){
    std::cout << "ClapTrap Default Constructor called" << std::endl;
    this->attack_damage = 0;
    this->energy_points = 10;
    this->hit_points = 10;
    this->name = "Generic ClapTrap";  
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "Claptrap constructor called" << std::endl;
    this->name = name;
    this->attack_damage = 0;
    this->energy_points = 10;
    this->hit_points = 10;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
   std::cout << "ClapTrap Copy constructor called" << std::endl;
   *this = copy; 
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap Destroy constructor called" << std::endl;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &source)
{
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    this->name = source.name;
    this->attack_damage = source.attack_damage;
    this->hit_points = source.hit_points;
    this->energy_points = source.energy_points;
    return(*this);    
}


/*****************************************************************************/
/*      Claptrap's functions                                                 */
/*****************************************************************************/

void ClapTrap::attack(const std::string &string)
{
    if(this->energy_points > 0 && this->hit_points > 0)
    {
        this->energy_points -= 1;
        std::cout << "Claptrap " << this->name << " attacks " << string << " causing ";
        std::cout << this->attack_damage << " points of damage!" << std::endl;
    }
    if(this->energy_points <= 0 && this->hit_points > 0)
        std::cout << "Claptrap " << this->name << " doesn't have energy poits and can't attack" << std::endl;
    if(this->hit_points == 0)
        std::cout << "Claptrap " << this->name << " doesn't have hit points and can't attack " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hit_points > amount && this->hit_points > 0)
    {
        this->hit_points -= amount;
        std::cout << "Claptrap " << this->name << " recives " << amount << " points of damage!" << std::endl;
    }
    else if (this->hit_points < amount && this->hit_points > 0)
    {
        this->hit_points = 0;
        std::cout << "Claptrap " << this->name << " recives " << amount << " points of damage!" << std::endl;
    }
    else if (this->hit_points == 0)
        std::cout << "Claptrap " << this->name << " can't receive " << amount << " points of damage because it hasn't have more hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energy_points > 0 && (this->hit_points < 10 && this->hit_points > 0))
    {
        this->hit_points += amount;
        this->energy_points -= 1;
        std::cout << "Claptrap " << this->name << " restores " << amount << " hit points" << std::endl;
    }
    if(this->hit_points == 0)
        std::cout << "Claptrap " << this->name << " can't repair itself because it hasn't more hit points" << std::endl;
    if(this->energy_points == 0)
        std::cout << "Claptrap " << this->name << " can't repair itself because it hasn't more energy points" << std::endl;
}


void ClapTrap::show_stats()
{
    std::cout << std::endl;
    std::cout << "Stats at the moment:" << std::endl;
    std::cout << "Hit_points remaining: " << hit_points << std::endl;
    std::cout << "Energy points remaining: " << energy_points << std::endl;
    std::cout << std::endl;
}

