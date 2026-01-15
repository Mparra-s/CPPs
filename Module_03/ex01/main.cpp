/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 11:11:02 by mparra-s          #+#    #+#             */
/*   Updated: 2025/12/26 16:27:30 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << "Objetos Claptrap" << std::endl;
	{
        ClapTrap a;
        ClapTrap b("ClapTrap");
        int i = 0;
        
        a.beRepaired(1);
        a.takeDamage(14);
        a.attack("Albert");
        b.show_stats();
        b.attack("John");
        b.takeDamage(2);
        b.beRepaired(1);
        while(i < 10)
        {
            b.attack("John");
            b.beRepaired(1);
            i++;
        }
        b.show_stats();
    }
    std::cout << std::endl;
    std::cout << "Objetos ScavTrap" << std::endl;
    {
        ScavTrap c;
        ScavTrap d("Serena");
        c.attack("Albert");
        c.takeDamage(1);
        c.beRepaired(1);
        c.guardGate();
        d.show_stats();
        d.attack("John");
        d.takeDamage(4);
        d.beRepaired(2);
        d.guardGate();
        d.show_stats();
    }
	return (0);
}