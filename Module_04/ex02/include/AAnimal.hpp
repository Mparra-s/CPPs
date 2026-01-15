/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:45:00 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/09 14:48:53 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class AAnimal
{
    protected:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal& copy);
        AAnimal &operator=(const AAnimal& other);
        std::string type;
    
    public:
        
        virtual ~AAnimal();
        
        virtual void makeSound() const = 0; 
        
        //Setters y getters;
        virtual void setType(std::string new_type) = 0;
        virtual std::string getType() const = 0;
};

#endif