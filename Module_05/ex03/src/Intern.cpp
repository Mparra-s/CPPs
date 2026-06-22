/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:38:47 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/21 14:42:56 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

Intern::Intern(){
    std::cout << "Default Intern constructor called" << std::endl;  
}

Intern::Intern(const Intern& copy){
    *this = copy;
    std::cout << "Intern Copy constructor called" << std::endl;
}

Intern::~Intern(){
    std::cout << "Intern Deconstructor operator called" << std::endl;    
}

Intern& Intern::operator=(const Intern& other){
    (void)other;
    std::cout << "Intern Assignation operator called" << std::endl;   
    return(*this);    
}

AForm *Intern::makeShrubbery(const std::string& target){
    return(new ShrubberyCreationForm(target)); 
}

AForm *Intern::makeRobotomy(const std::string& target){
    return(new RobotomyRequestForm(target));
}

AForm *Intern::makePardon(const std::string& target){
    return(new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(const std::string& form, const std::string& target){
    const std::string Forms[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
    
    typedef AForm *(Intern::*FormFunct)(const std::string&);

    FormFunct functions[3] = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePardon};
    for(int i = 0; i < 3; i++)
    {
        if(form == Forms[i])
        {
            std::cout << "Intern creates " << form << std::endl;
            return(this->*functions[i])(target);
        }
    }
    throw AForm::FormNotCreatedException();
    return NULL;
}