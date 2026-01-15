/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:51:50 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/09 12:47:35 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain(){
    for(size_t i = 0; i < 100; i++)
        this->ideas[i] = "Idea genial ";
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& copy){
    (*this) = copy;
    std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other){
    std::cout << "Brain Assignation operator called" << std::endl;
    if(this != &other)
    {
        for(size_t i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return(*this);
}

Brain::~Brain(){
    std::cout << "Brain Destructor called" << std::endl;
}

const std::string& Brain::get_Idea(const size_t i) const{
    return(this->ideas[i]);    
}

void Brain::set_Idea(size_t i, const std::string& idea){
    this->ideas[i] = idea; 
}