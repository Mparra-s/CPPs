/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 11:11:43 by mparra-s          #+#    #+#             */
/*   Updated: 2025/12/26 16:21:47 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        std::string type;
        unsigned int hit_points;
        unsigned int max_hit_p;
        unsigned int attack_damage;
        unsigned int energy_points;
    
    public:
        ClapTrap();
        ClapTrap(const ClapTrap& copy);
        ClapTrap(std::string name);
        ~ClapTrap();
        
        ClapTrap &operator=(const ClapTrap &src);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void show_stats();
};
#endif