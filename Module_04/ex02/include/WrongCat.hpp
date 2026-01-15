/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:45:34 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/08 15:55:45 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <cstdlib>

class WrongCat : public WrongAnimal
{
    private:
        Brain *wrongCat_Brain;
        
    public:
        WrongCat();
        WrongCat(std::string new_type);
        WrongCat(const WrongCat& type);
        WrongCat& operator=(const WrongCat& other);
        
        ~WrongCat();

        void makeSound() const;
        void setType(std::string new_type);
        std::string getType()const;

        void setIdea(size_t i, const std::string& idea);
        std::string getIdea(size_t i);
};

#endif