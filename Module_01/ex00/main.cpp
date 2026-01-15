/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:41:52 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/02 10:39:26 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *ZombieBoy;
    
    ZombieBoy = newZombie("Zombieboy");
    ZombieBoy->announce();
    
    randomChump("Zombiegirl");
    
    
    
    delete ZombieBoy;
    return(0);
}