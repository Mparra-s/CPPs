/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:32:26 by mparra-s          #+#    #+#             */
/*   Updated: 2025/10/29 16:11:37 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
    std::string phone_number;

public:
    void setFirstName(std::string first_name);
    void setLastName(std::string last_name);
    void setNickname(std::string nickname);
    void setDarkestSecret(std::string darkest_secret);
    void setPhoneNumber(std::string phone_number);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getDarkestSecret() const;
    std::string getPhoneNumber() const;
};

#endif
