/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 11:40:38 by mparra-s          #+#    #+#             */
/*   Updated: 2026/02/20 11:40:38 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN& copy) : rpn(copy.rpn){}

RPN::~RPN(){}

RPN& RPN::operator=(const RPN& other){
    if(this != &other)
        rpn = other.rpn;
    return(*this);
}  



bool RPN::createStack(const std::string line){
    std::istringstream argument(line);
    std::stack<std::string> temp;
    std::string token;
    int counter = 1;
    int grad = 0;
    
    while(!rpn.empty())
        rpn.pop();
    while(argument >> token)
    {
        if(!checkTokens(token, counter, grad))
            return 0;
        temp.push(token);
        counter ++;
    }
    if(grad != 1)
    {
        std::cerr << "Error: invalid expression. Unbalanced relation between number and operators"
            << std::endl;
            return 0;
    }
    while(!temp.empty())
    {
        rpn.push(temp.top());
        temp.pop();
    }
    return 1;
}


void RPN::calculate()
{
    std::stack<double> temp;
    std::string token;
    std::string totalf;
    double number;
    double f_number;
    double s_number;
    double total;

    while(!rpn.empty())
    {
        token = rpn.top();
        rpn.pop(); 
        std::stringstream check(token);
        check >> number;
        if(check.fail())
        {
            f_number = temp.top();
            temp.pop();
            s_number = temp.top();
            temp.pop();
            if(!operate(token, f_number, s_number, total))
                return ;
            temp.push(total);
        }
        else
            temp.push(number);  
    }
    totalf = modTotal(total);
    std::cout << std::fixed << totalf << std::endl;
}
