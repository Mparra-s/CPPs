/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 18:08:45 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/08 15:54:49 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
    private:
        std::string type;
        
    public:
        WrongCat();
        WrongCat(std::string new_type);
        WrongCat(const WrongCat& type);
        WrongCat& operator=(const WrongCat& other);
        ~WrongCat();

        void makeSound() const;
        void setType(std::string new_type);
        std::string getType()const;
};

#endif