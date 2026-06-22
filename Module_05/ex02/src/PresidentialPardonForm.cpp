/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:21:51 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/20 15:19:40 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"
#include "../include/Bureaucrat.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm::AForm("Default", 5, 25), _target("null"){
    std::cout << "Default PresidentialPardon Form constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm::AForm("PresidentialPardonForm", 5, 25), _target(target){
    std::cout << "Parametric PresidentialPardon Form constructor called" << std::endl;   
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm::AForm(copy), _target(copy._target){
    std::cout << "PresidentialPardon Form Copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other){
    _target = other._target;
    std::cout << "PresidentialPardon Form Assignation operator called" << std::endl;   
    return(*this);    
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardon Form Deconstructor called" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat& buro) const{
    if(!isSigned())
        throw FormNotSignedException();
    if(buro.get_Grade() > getGradeEx())
        throw GradeTooLowException();
    std::cout << "Burocrat: " << buro.get_Name() << " informs that: " << this->_target << " has been pardoned by Zaphod Beeblebrox."
    << std::endl;
}