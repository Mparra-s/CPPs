/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:06:43 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/02 10:18:46 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream>

class Zombie
{
private:
    std::string z_name;

public:
    Zombie();
    //Zombie(std::string z_name);
    ~Zombie();
    void announce();
    void setZombieName(std::string z_name);
};

Zombie* zombieHorde(int N, std::string name);

#endif