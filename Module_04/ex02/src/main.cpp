/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:20:55 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/09 12:48:12 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"
#include "../include/Brain.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main()
{
    size_t amount = 6;
    size_t i = 0;
    
    /*AAnimal prueba;
    
    prueba->makeSound();*/
    
    const AAnimal *c[amount];
    while(i < amount)
    {
        if(i % 2 == 0)
        {
            c[i] = new Cat();
            c[i]->makeSound();
        }
        else
        {
            c[i] = new Dog();
            c[i]->makeSound();            
        }            
        i++; 
    }
    
    /*     COMPROBACIONES DE COPIA PROFUNDA   */
    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    Cat original;
    Cat copy = original;
    std::cout << std::endl;
    std::cout << "** Pruebas de copia profunda **" << std::endl;
    std::cout << "Valores originales" << std::endl;
    std::cout << std::endl;
    copy.makeSound();
    original.makeSound();
    std::cout << "** Cambiamos la idea 1 en el gato original **" << std::endl;
    copy.setIdea(1, "Quiero pollo ");
    copy.makeSound();
    original.makeSound();
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << std::endl;
    Dog tobbie;
    Dog oddie = tobbie;
    std::cout << std::endl;
    std::cout << "** Pruebas de copia profunda **" << std::endl;
    std::cout << "Valores originales" << std::endl;
    std::cout << std::endl;
    tobbie.makeSound();
    oddie.makeSound();
    std::cout << "** Cambiamos la idea 1 en el perro original **" << std::endl;
    tobbie.setIdea(1, "Quiero ir al parque ");
    tobbie.makeSound();
    oddie.makeSound();
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << std::endl;
    WrongCat garfield;
    WrongCat ruedines = garfield;
    std::cout << std::endl;
    std::cout << "** Pruebas de copia profunda **" << std::endl;
    std::cout << "Valores originales" << std::endl;
    std::cout << std::endl;
    garfield.makeSound();
    ruedines.makeSound();
    std::cout << "** Cambiamos la idea 1 en el perro original **" << std::endl;
    garfield.setIdea(1, "Quiero Lasaña ");
    garfield.makeSound();
    ruedines.makeSound();
    std::cout << std::endl;
    
    i = 0;
    while(i < amount)
    {
        delete c[i];
        i++;
    }
    return (0);
}