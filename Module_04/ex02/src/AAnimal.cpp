/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:46:39 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/08 12:43:20 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::AAnimal(){}

AAnimal::AAnimal(std::string type){
    this->type = type;
    std::cout << "Parameterized AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy){
    *this = copy;
    std::cout << "AAnimal constructor copy called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other){
    std::cout << "AAnimal Assignation operator called" << std::endl;
    if(this != &other)
        this->type = other.type;
    return(*this);
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal destructor called" << std::endl;
}