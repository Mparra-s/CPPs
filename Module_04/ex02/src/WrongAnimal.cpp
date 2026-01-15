/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:47:02 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/09 12:48:28 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("StrayWrongAnimal"){
    std::cout << "Default Animal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string o_type) : type(o_type){
    std::cout << "Parameterized WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy){
    *this = copy;
    std::cout << "WrongAnimal constructor copy called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    std::cout << "WrongAnimal Assignation operator called" << std::endl;
    if(this != &other)
        this->type = other.type;
    return(*this);
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::setType(std::string new_type){
    this->type = new_type;
}

std::string WrongAnimal::getType()const{
    return(this->type);
}

void WrongAnimal::makeSound() const{
     std::cout << this->type << " makes a random and atrocious sound" << std::endl;
}