/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 09:50:47 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/19 16:27:08 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        const int _grade_ex;
        const int _grade_si;
        bool _marked;
           
    public:
        Form();
        Form(std::string name, int grade_ex, int grade_si, bool marked);
        Form(const Form& copy);
        ~Form();

        Form &operator=(const Form& other);

        void beSigned(const Bureaucrat& Buro);
        
        std::string getName() const;
        int getGradeEx() const;
        int getGradeSi() const;
        bool isSigned() const;

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();            
        };

};

std::ostream &operator <<(std::ostream &out, const Form& buro);

#endif