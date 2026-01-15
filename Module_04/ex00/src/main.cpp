/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:01:42 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/09 14:37:17 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wota = new WrongAnimal();
    const WrongAnimal* w = new WrongCat();
    std::cout << std::endl;
    std::cout << "Normal Animal Tests" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl;
    std::cout << "Wrong Animals test" << std::endl;
    std::cout << w->getType() << " " << std::endl;
    wota->makeSound();
    w->makeSound();
    std::cout << std::endl;
        
    delete meta;
    delete i;
    delete j;
    delete wota;
    delete w;
    return (0); 
}

