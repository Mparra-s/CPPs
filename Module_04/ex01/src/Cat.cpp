/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:46:44 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/09 12:42:50 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Animal.hpp"

Cat::Cat() : Animal("Cat"){
    this->cat_Brain = new Brain();
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy){
    this->cat_Brain = new Brain(*copy.cat_Brain);
    std::cout << "Cat constructor copy called" << std::endl;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Cat Assignation operator called" << std::endl;
    if(this != &other)
    {
        Animal::operator=(other);
        delete this->cat_Brain;
        this->cat_Brain = new Brain (*other.cat_Brain);
    }
    return(*this);
}

Cat::~Cat(){
    delete this->cat_Brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    size_t n;

    n = std::rand() % 100;
    std::cout << this->type << " meows: Meowwwww!!!" << std::endl;
    std::cout << this->cat_Brain->get_Idea(n) << n << std::endl;
    std::cout << "Dame de comer" << std::endl;
    std::cout << this->cat_Brain->get_Idea(1) << 1 << std::endl;        
}

void Cat::setType(std::string new_type){
    this->type = new_type;
}

std::string Cat::getType() const{
    return(this->type);
}

void Cat::setIdea(size_t i, const std::string& idea){
    this->cat_Brain->set_Idea(i, idea);
}

std::string Cat::getIdea(size_t i) const{
    return(this->cat_Brain->get_Idea(i));
}