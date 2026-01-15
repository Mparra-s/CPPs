/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:47:08 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/09 14:48:02 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

WrongCat::WrongCat() : WrongAnimal ("WrongCat"){
    this->wrongCat_Brain = new Brain();
    if(!this->wrongCat_Brain)
    {
        std::cout << "wrongCat_Brain couldn't have been allocated" << std::endl;
    }
    std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(std::string o_type) : WrongAnimal(o_type){
    std::cout << "Parameterized WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy){
    this->wrongCat_Brain = new Brain(*copy.wrongCat_Brain);
    std::cout << "WrongCat constructor copy called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
    std::cout << "WrongCat Assignation operator called" << std::endl;
    if(this != &other)
    {
        WrongAnimal::operator=(other);
        delete wrongCat_Brain;
        this->wrongCat_Brain = new Brain(*other.wrongCat_Brain);
    }                
    return(*this);
}

WrongCat::~WrongCat(){
    delete wrongCat_Brain;
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const{
    size_t n;

    n = std::rand() % 100;
    std::cout << this->type << " barks: WOOOOOOOF!!! WOOOOOOOF!!!" << std::endl;
    std::cout << this->wrongCat_Brain->get_Idea(n) << n << std::endl;
    std::cout << "Barks: soy un perro" << std::endl;
    std::cout << this->wrongCat_Brain->get_Idea(1) << 1 << std::endl;   
}

void WrongCat::setType(std::string new_type){
    this->type = new_type;
}

std::string WrongCat::getType()const{
    return(this->type);
}

void WrongCat::setIdea(size_t i, const std::string& idea){
    this->wrongCat_Brain->set_Idea(i, idea);
}

std::string WrongCat::getIdea(size_t i){
    return(this->wrongCat_Brain->get_Idea(i));
}