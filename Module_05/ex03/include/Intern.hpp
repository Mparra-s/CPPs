/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:35:55 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/21 14:53:57 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>

class AForm;

class ShrubberyCreationForm;

class RobotomyRequestForm;

class PresidentialPardonForm;

class Intern
{
    private:

    public:
        Intern();
        Intern(const Intern& copy);
        ~Intern();

        Intern& operator=(const Intern& other);
        AForm *makeForm(const std::string& form, const std::string& target);
        AForm *makeShrubbery(const std::string& target);
        AForm *makeRobotomy(const std::string& target);
        AForm *makePardon(const std::string& target);
};



#endif