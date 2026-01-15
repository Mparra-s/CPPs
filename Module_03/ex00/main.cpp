/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:20:17 by mparra-s          #+#    #+#             */
/*   Updated: 2025/12/26 11:03:21 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap b("Claptrap");
	int i = 0;
	
	a.beRepaired(1);
	a.takeDamage(14);
	a.attack("Albert");
	b.attack("John");
	b.takeDamage(2);
	b.beRepaired(1);
	while(i < 10)
	{
		b.attack("John");
		b.beRepaired(1);
		i++;
	}
	return (0);
}