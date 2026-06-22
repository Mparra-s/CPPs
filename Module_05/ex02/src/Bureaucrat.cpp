/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:52:41 by mparra-s          #+#    #+#             */
/*   Updated: 2026/06/22 15:16:42 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150){
    std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name){
    if(_grade < 1)
        throw GradeTooHighException();
    else if(_grade > 150)
        throw GradeTooLowException();
    else
        this->grade = _grade;
    std::cout << "Bureaucrat Parametric constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name), grade(copy.grade){
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
    if(this != &other)
        this->grade = other.grade;
    std::cout << "Bureaucrat Assignation operator called" << std::endl;    
    return(*this);
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat Deconstructor operator called" << std::endl;    
}

std::string Bureaucrat::get_Name() const{
    return(this->name);
}

int Bureaucrat::get_Grade() const{
    return(this->grade);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& buro){
    out << buro.get_Name() << ", burocrat grade " << buro.get_Grade() << std::endl;
    return (out); 
}


void Bureaucrat::signForm(AForm& form)
{
    if(!form.isSigned())
        form.beSigned(*this);
    else
        std::cout << "The Form is already signed" << std::endl;
}

void Bureaucrat::decrease_Grade(){
    if(this->grade < 150)
        this->grade += 1;
    else
        throw GradeTooLowException();
}

void Bureaucrat::increase_Grade(){
    if(this->grade > 1)
        this->grade -= 1;
    else
        throw GradeTooHighException();
}

void Bureaucrat::executeForm(const AForm& form){
    
    if(form.isSigned())
    {
        if(get_Grade() <= form.getGradeEx())
            form.execute(*this);
        else
            throw GradeTooLowException();
    }
    else
        throw AForm::FormNotSignedException();
}


const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return("Grade too high");    
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return("Grade too low");    
}
