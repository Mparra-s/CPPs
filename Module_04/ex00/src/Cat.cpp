/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:14:12 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/09 12:44:50 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal("Cat"){
     std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(std::string type){
    this->type = type;
    std::cout << "Parameterized Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& copy){
    *this = copy;
    std::cout << "Cat constructor copy called" << std::endl;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Animal Assignation operator called" << std::endl;
    if(this != &other)
        this->type = other.type;
    return(*this);
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << this->type << " meows: Meowwwww!!!" << std::endl;        
}

void Cat::setType(std::string new_type){
    this->type = new_type;
}

std::string Cat::getType() const{
    return(this->type);
}