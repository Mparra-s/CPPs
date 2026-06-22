/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:35:18 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/20 14:37:32 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP

#include "../include/AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string _target);
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        virtual ~RobotomyRequestForm();
        
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

        void execute(const Bureaucrat& buro) const;
};

#endif