/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:53:43 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/02 10:31:53 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return (NULL);
        
    Zombie *zombieHorde = new Zombie[N];
    int i;
    
    i = 0;
    while(i < N)
    {
        zombieHorde[i].setZombieName(name);
        i++;               
    }
    return(zombieHorde);
}