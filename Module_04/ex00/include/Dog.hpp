/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:14:21 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/08 15:54:39 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
    private:
    
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog& copy);
        Dog& operator=(const Dog& other);
        ~Dog();

        void makeSound() const;
        void setType(std::string new_type);
        std::string getType() const;
};

#endif