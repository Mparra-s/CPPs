/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:46:02 by mparra-s          #+#    #+#             */
/*   Updated: 2025/11/06 17:00:52 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
    private:
        std::string level;
        void debug(void);
        void info (void);
        void warning (void);
        void error (void);

    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};

#endif