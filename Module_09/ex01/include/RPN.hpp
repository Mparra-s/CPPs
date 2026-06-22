/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 11:40:31 by mparra-s          #+#    #+#             */
/*   Updated: 2026/02/20 11:40:31 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <iomanip>

class RPN
{
    private:
        std::stack<std::string> rpn;
    
    public:
        RPN();
        RPN(const RPN& copy);
        ~RPN();

        RPN& operator=(const RPN& other);

        bool createStack(const std::string line);
        bool checkNumbers(std::string token, int& grad);
        bool isOperator(std::string& token);
        bool checkOperators(std::string token, int& grad);
        bool checkTokens(std::string token, int counter, int& grad);
        std::string modTotal(double value);
        bool operate(std::string op, double first, double second, double& total);
        void errorsLine();
        void calculate();
};    

#endif