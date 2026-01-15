/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:41:18 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/07 12:14:30 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "Objetos DiamondTrap" << std::endl;
    {
        DiamondTrap g;
        DiamondTrap h("Matthew");
        g.attack("Rose");
        g.takeDamage(1);
        g.beRepaired(1);
        g.highFiveGuys();
        h.whoAmI();
        h.attack("Matthew");
        h.takeDamage(15);
        h.beRepaired(7);
        h.highFiveGuys();
        h.guardGate();
        h.whoAmI();         
    }
	return (0);
}