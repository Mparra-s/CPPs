/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:30:49 by mparra-s          #+#    #+#             */
/*   Updated: 2026/03/03 15:32:16 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"


void RPN::errorsLine()
{
    std::cerr << std::endl;
    std::cerr << "Error: the input introduced is incorrect." << std::endl;
    std::cerr << "  -Each input should be separated by one space" << std::endl;
    std::cerr << "  -Each number should be an integer of one digit" << std::endl;
    std::cerr << "  -The only operators accepted are: '+' '-' '*' '/'" << std::endl;
    std::cerr << "  -It should be one operand for each number after the first (Ej: '2 3 + 5 -')" << std::endl;
} 



bool RPN::checkNumbers(std::string token, int& grad)
{
    double number;
    std::stringstream check(token);
    check >> number;
    if(check.fail() || token.find('.') != std::string::npos)
        return 0;
    if(number > 9 || number < 0)
        return 0;
    grad += 1;
    return 1;
}



bool RPN::isOperator(std::string& token)
{
    if(token.length() == 1 && (token[0] == '+' || token[0] == '-'
        || token[0] == '*' || token[0] == '/'))
        return 1;
    else
        return 0;
}



bool RPN::checkOperators(std::string token, int& grad)
{
    if(!isOperator(token))
        return 0;
    grad -= 1;
    return 1;    
}



bool RPN::operate(std::string op, double first, double second, double& total)
{
    if(op == "+")
    total = second + first;
    else if(op == "-")
    total = second - first;
    else if(op == "*")
    total = second * first;
    else if(op == "/")
    {
        if(first == 0)
        {
            std::cerr << "Error: Impossible to divide by 0" << std::endl;
            return 0;
        }
        else
        total = second / first;
    }
    else
    return(0);
    return(1);
    
}


std::string RPN::modTotal(double value)
{
    std::string total;
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(15) << value;
    
    total = oss.str();
    
    size_t dotPos = total.find('.');
    if (dotPos != std::string::npos)
    {
        while (!total.empty() && total[total.size() - 1] == '0')
            total.erase(total.size() - 1);
        
        if (!total.empty() && total[total.size() - 1] == '.')
            total.erase(total.size() - 1);
    }
    return total;
}


bool RPN::checkTokens(std::string token, int counter, int& grad)
{
    int prev = grad;
    if(checkNumbers(token, grad))
        return 1;
    grad = prev;
    if(checkOperators(token, grad))
    {
        if(prev < 2)
        {
            std::cerr << "Error: not enough numbers for the operation at position "
                << counter << std::endl;
            return 0;
        }
        return 1;
    }
    std::cerr << "Error: invalid token at position " << counter << std::endl;
    return 0;
}