/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:30:56 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/09 12:45:09 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal("Dog"){
     std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(std::string type){
    this->type = type;
    std::cout << "Parameterized Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& copy){
    *this = copy;
    std::cout << "Dog constructor copy called" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
    std::cout << "Dog Assignation operator called" << std::endl;
    if(this != &other)
        this->type = type;
    return(*this);
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << this->type << " barks: WOOOOOOOF!!! WOOOOOOOF!!!" << std::endl;
}

void Dog::setType(std::string new_type){
    this->type = new_type;
}

std::string Dog::getType()const{
    return(this->type);
}
