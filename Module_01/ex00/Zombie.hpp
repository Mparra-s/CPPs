/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:41:27 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/02 10:15:42 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIES_HPP
#define ZOMBIES_HPP

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string z_name;
    public:
        Zombie();
        Zombie(std::string z_name);
        ~Zombie(); 
        void announce(void) const;
        
        
};
    
Zombie* newZombie(std::string z_name);
void randomChump(std::string z_name);

#endif