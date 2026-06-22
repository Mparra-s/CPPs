/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 09:50:47 by mparra-s          #+#    #+#             */
/*   Updated: 2026/06/22 15:17:11 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <exception>
#include <fstream>
#include <cstdlib>

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        const int _grade_ex;
        const int _grade_si;
        bool _marked;
        
    protected:
        AForm();
        AForm(std::string name, int grade_ex, int grade_si);
        AForm(const AForm& copy);
        
    public:
        virtual ~AForm();

        AForm &operator=(const AForm& other);
        void beSigned(const Bureaucrat& Buro);

        virtual void execute(Bureaucrat const& executor) const = 0;
        
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

        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class FormNotCreatedException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

};

std::ostream &operator <<(std::ostream &out, const AForm& buro);

#endif