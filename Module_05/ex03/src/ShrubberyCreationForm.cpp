/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:48:25 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/20 15:20:08 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"
#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm::AForm("Default", 137, 145), _target("null"){
    std::cout << "Default ShrubberyCreation Form constructor called" << std::endl;    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm::AForm("Shrubbery_Creation_Form", 137, 145), _target(target){
    std::cout << "Parametric ShrubberyCreation Form constructor called" << std::endl;   
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm::AForm(copy), _target(copy._target){
    std::cout << "ShrubberyCreation Form Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreation Form Deconstructor called" << std::endl;    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
    _target = other._target;
    std::cout << "ShrubberyCreation Form Assignation operator called" << std::endl;   
    return(*this);   
}

void ShrubberyCreationForm::execute(const Bureaucrat& buro) const{
    if(!isSigned())
        throw FormNotSignedException();
    if(buro.get_Grade() > getGradeEx())
        throw GradeTooLowException();    
    std::string file_output = _target + "_shrubbery.txt";
    std::ofstream outfile(file_output.c_str());
    if (!outfile)
        throw std::runtime_error("File error");
    outfile << TREE;
    outfile.close();
    std::cout << "Bureaucrat: " << buro.get_Name() << " successfuly created a Shrubbery tree" << std::endl;
}