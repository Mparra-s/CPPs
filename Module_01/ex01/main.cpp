/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:52:37 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/02 10:18:18 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
    int n = 5;
    int i = 0;
    std::string Zombie_h = "Zombie";    
    Zombie *Horde = zombieHorde(n, Zombie_h);
    
    while(i < n)
    {
        Horde[i].announce();
        i++;
    }
    delete[] Horde;
    return(0);    
}