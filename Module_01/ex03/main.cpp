/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:22:44 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/02 10:53:45 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setWeapon("machine gun");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        Weapon club2 = Weapon("Awesome crude spiked club");
        HumanB jim("Jim");
        jim.attack();
        jim.setHumanWeaponB(club);
        jim.attack();
        club.setWeapon("some other type of club");
        jim.attack();
        jim.setHumanWeaponB(club2);
        jim.attack();
    }
    return 0;
}