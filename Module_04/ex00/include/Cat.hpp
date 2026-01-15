/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:07:34 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/08 15:53:55 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
    private:
    
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat& copy);
        Cat& operator=(const Cat& other);
        ~Cat();

        void makeSound() const;
        void setType(std::string new_type);
        std::string getType() const;
};

#endif