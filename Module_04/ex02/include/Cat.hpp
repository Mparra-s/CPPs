/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:45:10 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/08 12:56:19 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <cstdlib>

class Cat : public AAnimal
{
    private:
        Brain *cat_Brain;
    
    public:
        Cat();
        Cat(const Cat& copy);
        Cat& operator=(const Cat& other);
        ~Cat();

        void makeSound() const;
        void setType(std::string new_type);
        std::string getType() const;
        
        void setIdea(size_t i, const std::string& idea);
        std::string getIdea(size_t i) const;
};

#endif