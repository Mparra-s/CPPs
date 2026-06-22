/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:35:09 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/20 14:37:56 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
#define SHRUBBERY_HPP

#include "../include/AForm.hpp"

#define TREE "          &&& &&  & &&\n      && &\\/&\\|& ()|/ @, &&\n      &\\/(/&/&||/& /_/)_&/_&\n   &() &\\/&|()|/&\\/ '%\" & ()\n  &_\\_&&_\\ |& |&&/&__%_/_& &&\n&&   && & &| &| /& & % ()& /&&\n ()&_---()&\\&\\|&&-&&--%---()~\n     &&     \\|||\n             |||\n             |||\n             |||\n       , -=-~  .-^- _\n"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string _target);
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        virtual ~ShrubberyCreationForm();

        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

        void execute(const Bureaucrat& buro) const;
};



#endif