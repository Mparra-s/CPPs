/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:46:39 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/05 16:05:52 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Stray_animal"){
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string type){
    this->type = type;
    std::cout << "Parameterized Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& copy){
    *this = copy;
    std::cout << "Animal constructor copy called" << std::endl;
}

Animal& Animal::operator=(const Animal& other){
    std::cout << "Animal Assignation operator called" << std::endl;
    if(this != &other)
        this->type = other.type;
    return(*this);
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const{
    std::cout << this->type << " makes and obnoxious sound" << std::endl;
}

void Animal::setType(std::string new_type){
    this->type = new_type;
}

std::string Animal::getType()const{
    return(this->type);
}