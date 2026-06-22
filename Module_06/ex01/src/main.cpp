/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:31:41 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/29 15:31:41 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../include/Serializer.hpp"

int main()
{
	Data inform;

	inform.name = "Roger";


	Data *new_ptr;
	new_ptr = &inform;

	std::cout << "<===== Serialization =====>" << std::endl;
	uintptr_t raw_value = Serializer::serialize(new_ptr);
	std::cout << "New_ptr: " << new_ptr << std::endl;


	Data *des_ptr;
	des_ptr = Serializer::deserialize(raw_value);
	std::cout << "Deserialized ptr: " << des_ptr << std::endl;



	std::cout << "Original ptr: " << new_ptr << std::endl;
	std::cout << "Deserialized ptr: " << des_ptr << std::endl;

	return (0);
}