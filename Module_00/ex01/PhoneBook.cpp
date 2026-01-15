/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:52:32 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/05 10:20:05 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

/* ******** Setters para cada una de las variables de la lista de contactos ******** */
/* ********         Función para almacenar los datos que nos envíen         ******** */

void Contact::setFirstName(std::string name)
{
    first_name = name;
}
void Contact::setLastName(std::string l_name)
{
    last_name = l_name;
}
void Contact::setNickname(std::string n_name)
{
    nickname = n_name;
}
void Contact::setDarkestSecret(std::string d_secret)
{
    darkest_secret = d_secret;
}
void Contact::setPhoneNumber(std::string p_number)
{
    phone_number = p_number;
}    
int check(std::string tel)
{    
    int j;

    j = 0;
    if(tel.empty())
    {
        std::cout << std::endl;
        std::cout << "< Error: Empty field. Introduce a new command  >" << std::endl;
        return 0;
    }      
    while(j < (int)tel.length())
    {
        if(tel[0] == '+')
            j++;
        if(!isdigit(tel[j]))
        {
            std::cout << "< Wrong number introduced. >\n< Entry not saved. >\nInsert new command." << std::endl;
            return 0;
        }
        j++;
    }
    return(1);    
}

std::string Phonebook::Truncate(std::string str) const
{
    if(str.size() > 10)
        str = str.substr(0, 9) + ".";
    return(str);    
}


/* ******** Getters para cada una de las variables de la lista de contactos ******** */
/* ********          Función para recoger los datos que nos envíen          ******** */

std::string Contact::getFirstName() const {return first_name;}
std::string Contact::getLastName() const {return last_name;}
std::string Contact::getNickname() const {return nickname;}
std::string Contact::getDarkestSecret() const{return darkest_secret;}
std::string Contact::getPhoneNumber() const{return phone_number;}

/* ******** Inicialización del valor de la variable ******** */
Phonebook::Phonebook() : contact_count(0), total_contact(0){}  //Sólo puedo tener un constructor y ahí inicialiar todas las variables necesarias.

void Phonebook::ADD()
{
    std::string first;
    std::string last;
    std::string nick;
    std::string secret;
    std::string tel;
    
    
    std::cout << "First Name: ";
    std::getline(std::cin, first);                      //no puedo usar sólo "std::cin >> first" porque ese comando sólo evalua si escribimos algo. Si hacemos Enter no rellena el campo.
    if(first.empty())
    {
        std::cout << "< Error: Field empty. >\n< Entry not saved. >\n< Insert new command >" << std::endl;
        return ;
    }
    
    std::cout << "Last Name: ";
    std::getline(std::cin, last);
    if(last.empty())
    {
        std::cout << "< Error: Field empty. >\n< Entry not saved. >\n< Insert new command >" << std::endl;
        return ;
    }
    
    std::cout << "Nickname: ";
    std::getline(std::cin, nick);
    if(nick.empty())
    {
        std::cout << "< Error: Field empty. >\n< Entry not saved. >\n< Insert new command >" << std::endl;
        return ;
    }
    
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, secret);
    if(secret.empty())
    {
        std::cout << "< Error: Field empty. >\n< Entry not saved. >\n< Insert new command >" << std::endl;
        return ;
    }
    
    std::cout << "Phone Number: ";
    std::getline(std::cin, tel);
    if(tel.empty())
    {
        std::cout << "< Error: Field empty. >\n< Entry not saved. >\n< Insert new command >" << std::endl;
        return ;        
    }
    if(check(tel) == 0)
    return ;
    
    contacts[contact_count].setFirstName(first);    
    contacts[contact_count].setLastName(last);
    contacts[contact_count].setNickname(nick);
    contacts[contact_count].setDarkestSecret(secret);
    contacts[contact_count].setPhoneNumber(tel);
    
    contact_count++;
    if(total_contact < 8)
        total_contact++;
    system("clear");
    std::cout << "< Insert new command >" << std::endl;
    if(contact_count >= 8)
        contact_count = 0;
    return ;
}

void Phonebook::SEARCH() const
{
    int i;
    int value;
    std::string index;
    
    system("clear");
    std::cout << "     index|first name| last name|  nickname|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    i = 0;
    while(i < total_contact)
    {
        std::cout << std::setw(10) << std::right << (i + 1) << "|"
                << std::setw(10) << std::right << Truncate(contacts[i].getFirstName()) << "|"
                << std::setw(10) << std::right << Truncate(contacts[i].getLastName()) << "|"
                << std::setw(10) << std::right << Truncate(contacts[i].getNickname()) << "|" << std::endl;
        i++;
    }
    std::cout << std::endl;
    std::cout << "Insert index to display: ";
    std::getline(std::cin, index);
    if (check(index) == 0)
        return ;        
    value = std::atoi(index.data()) - 1;
    if(value > total_contact || value < 0)
    {
        std::cout << "Incorrect number: Number should be between 1 and";
        std::cout << contact_count << std::endl;
        std::cout << std::endl;
        std::cout << "Insert index to display: ";
        return ;
    }
    system("clear");
    std::cout << "Contact: " << index << std::endl;
    std::cout << "First Name: " << contacts[value].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[value].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[value].getNickname() << std::endl;
    std::cout << "Darkest secret: " << contacts[value].getDarkestSecret() << std::endl;
    std::cout << "Phone number: " << contacts[value].getPhoneNumber() << std::endl;
    std::cout << std::endl;
    std::cout << "< Insert new command >" << std::endl;
    return ;
}

int main()
{

    std::string command;
    Phonebook phonebook; 
    
    while(!std::cin.eof())
    {
        std::cin >> command;
        std::getline(std::cin, command);
        if(command.compare("ADD") == 0)
        {
            system("clear");
            phonebook.ADD();
        }
        else if(command.compare("SEARCH") == 0)
        {
            system("clear");
            phonebook.SEARCH();
        }
        else if(command.compare("EXIT") == 0)
        {
            system("clear");
            return(1);
        }
        else
        {
            system("clear");
            std::cout << "Invalid command: " << command <<". Try 'ADD', 'SEARCH' or 'EXIT'" << std::endl;
        }
    }
    return(0);
}