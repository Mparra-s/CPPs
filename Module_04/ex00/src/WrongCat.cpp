/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 18:17:56 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/09 12:45:52 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal ("WrongCat"){
    std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(std::string o_type) : WrongAnimal(o_type){
    std::cout << "Parameterized WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy){
    *this = copy;
    std::cout << "WrongCat constructor copy called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
    if(this != &other)
        this->type = other.type;
    return(*this);
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << this->type << " barks: WOOOOOOOF!!! WOOOOOOOF!!!" << std::endl;
}

void WrongCat::setType(std::string new_type){
    this->type = new_type;
}

std::string WrongCat::getType()const{
    return(this->type);
}