/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:39:13 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/20 15:19:56 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"
#include "../include/Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 45, 72), _target("null"){
    std::cout << "Default Robotomy Request Form constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 45, 72), _target(target){
    std::cout << "Parametric RobotomyRequest Form constructor called" << std::endl;   
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm::AForm(copy), _target(copy._target){
    std::cout << "RobotomyRequest Form Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequest Form Deconstructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other){
    _target = other._target;
    std::cout << "RobotomyRequest Form Assignation operator called" << std::endl;   
    return(*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& buro) const{
    int number = rand();
    if(!isSigned())
        throw FormNotSignedException();
    if(buro.get_Grade() > getGradeEx())
        throw GradeTooLowException();    
    if(number % 2 == 0)
        std::cout << "Burocrat: " << buro.get_Name() << " informs that " << this->_target
        << " has been robotomized successfully." << std::endl;
    else
        std::cout << "The robotomy has failed" << std::endl;
}

