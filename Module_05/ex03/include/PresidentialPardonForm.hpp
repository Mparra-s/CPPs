/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:16:07 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/20 14:37:48 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
#define PRESIDENTIAL_HPP

#include "../include/AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string _target);
        PresidentialPardonForm(const PresidentialPardonForm& copy);
        virtual ~PresidentialPardonForm();
        
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
        
        void execute(const Bureaucrat& buro) const;        
};

#endif