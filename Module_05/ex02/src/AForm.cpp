/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:33:57 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/22 11:45:22 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"

AForm::AForm() : _name("Default"), _grade_ex(150), _grade_si(150), _marked(false){
    std::cout << "Default Form constructor called" << std::endl;
}

AForm::AForm(std::string name, int grade_ex, int grade_si)
    : _name(name), _grade_ex(grade_ex), _grade_si(grade_si), _marked(false){
    if(grade_ex < 1)
        throw GradeTooHighException();
    else if (grade_ex > 150)
        throw GradeTooLowException();
    if(grade_si < 1)
        throw GradeTooHighException();
    else if (grade_si >150)
        throw GradeTooLowException();
    std::cout << "Parametric Form constructor called" << std::endl;   
}

AForm::AForm(const AForm& copy) : _name(copy._name), _grade_ex(copy._grade_ex), _grade_si(copy._grade_si), _marked(copy._marked){
    std::cout << "Form Copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& other){
    if(this != &other)
        _marked = other._marked;
    std::cout << "Form Assignation operator called" << std::endl;   
    return(*this);
}

AForm::~AForm(){
    std::cout << "Form Deconstructor called" << std::endl;
}

std::string AForm::getName() const{
    return(_name);
}

int AForm::getGradeEx() const{
    return(_grade_ex);
}

int AForm::getGradeSi() const{
    return(_grade_si);
}

bool AForm::isSigned() const{
    return(_marked);
}
    
std::ostream &operator<<(std::ostream &out, const AForm& form){
    out << "Form" << form.getName();
    if(form.isSigned())
        out << ", is signed";
    else
        out << ", is not signed";
    out << ", grade sign: " << form.getGradeSi()
    << ", grade exec: " << form.getGradeEx();
    return(out);    
}

const char *AForm::GradeTooHighException::what() const throw(){ 
    return("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw(){
    return("Grade is too low");    
}

const char *AForm::FormNotSignedException::what() const throw(){
    return("The Form is not signed");
}


void AForm::beSigned(const Bureaucrat& buro){
    if(_grade_si >= buro.get_Grade())
    {
        _marked = true;
        std::cout << "Burocrat: " << buro.get_Name() << " signed " << _name << std::endl;
    }
    else
        throw GradeTooLowException();
}
