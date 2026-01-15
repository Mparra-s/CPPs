/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 09:37:25 by mparra-s          #+#    #+#             */
/*   Updated: 2025/11/07 09:41:32 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER_H
#define HARLFILTER_H

#include <string>
#include <iostream>

class Harl
{
    private:
        std::string levels;
        void debug(void);
        void info (void);
        void warning(void);
        void error(void);
        
    public:
        Harl();
        ~Harl();
        void complain(std::string levels);
};

#endif