/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:52:33 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/15 17:40:53 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    
    public:
        Bureaucrat();
        Bureaucrat(std::string _name, int _grade);
        Bureaucrat(const Bureaucrat& copy);
        ~Bureaucrat();
        
        Bureaucrat &operator=(const Bureaucrat& other);
        
        void decrease_Grade();
        void increase_Grade();
        
        std::string get_Name() const;
        int get_Grade() const;

        //Exceptions
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

std::ostream &operator <<(std::ostream &out, const Bureaucrat& buro);

#endif