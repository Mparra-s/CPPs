/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:46:49 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/09 12:43:04 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal("Dog"){
    this->dog_Brain = new Brain();
    if(!this->dog_Brain)
        std::cout << "Dog Brain couldn't have been allocated" << std::endl;
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy){
    this->dog_Brain = new Brain(*copy.dog_Brain);
    std::cout << "Dog constructor copy called" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
    std::cout << "Dog Assignation operator called" << std::endl;
    if(this != &other)
    {
        Animal::operator=(other);
        delete this->dog_Brain;
        this->dog_Brain = new Brain(*other.dog_Brain);
    }        
    return(*this);
}

Dog::~Dog(){
    delete this->dog_Brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
    size_t n;

    n = std::rand() % 100;
    std::cout << this->type << " barks: WOOOOOOOF!!! WOOOOOOOF!!!" << std::endl;
    std::cout << this->dog_Brain->get_Idea(n) << n << std::endl;
    std::cout << "Sácame de paseo" << std::endl;
    std::cout << this->dog_Brain->get_Idea(1) << 1 << std::endl;       
}

void Dog::setType(std::string new_type){
    this->type = new_type;
}

std::string Dog::getType()const{
    return(this->type);
}

void Dog::setIdea(size_t i, const std::string& idea){
    this->dog_Brain->set_Idea(i, idea);
}

std::string Dog::getIdea(size_t i){
    return(this->dog_Brain->get_Idea(i));
}
