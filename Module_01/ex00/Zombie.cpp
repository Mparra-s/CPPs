/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:41:33 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/15 11:37:15 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



/***********************************/
/*    Constructor por defecto      */
/***********************************/

Zombie::Zombie(){}


/***********************************/
/*    Constructor con nombre       */
/***********************************/

Zombie::Zombie(std::string name)
{
    this->z_name = name;
    std::cout << z_name << " : has been created" << std::endl;
}


/***********************************/
/*    Destructor                   */
/***********************************/

Zombie::~Zombie()
{
    std::cout << z_name << " has been destroyed" << std::endl;    
}


/***********************************/
/*    Función mensaje              */
/***********************************/

void Zombie::announce() const
{
    std::cout << z_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}