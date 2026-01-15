/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:45:18 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/08 15:55:36 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <cstdlib>

class Dog : public AAnimal
{
    private:
        Brain *dog_Brain;
    
    public:
        Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& other);
        ~Dog();

        void makeSound() const;
        void setType(std::string new_type);
        std::string getType() const;

        void setIdea(size_t i, const std::string& idea);
        std::string getIdea(size_t i);        
};

#endif