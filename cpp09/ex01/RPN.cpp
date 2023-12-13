/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:07:46 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/12 20:10:55 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

//------------ OCF
RPN::RPN(void) : _result(0)
{
    std::cout << "Default constructor called!" << std::endl;
}

RPN::RPN(const RPN &old)
{
    std::cout << "Copy constructor called!" << std::endl;
    *this = old;
}

RPN::~RPN(void)
{
    std::cout << "Default destructor called!" << std::endl;
}

RPN &RPN::operator=(const RPN &old)
{
    std::cout << "Copy assignment operator called!" << std::endl;
    if(this != &old)
    {
        this->_stack = old._stack;
        this->_result = old._result;
    }
    return(*this);
}
//------------

int RPN::getResult(void){ return(this->_result); }

bool RPN::validArgs(int argc, char *argv[])
{
    std::string tokens = " 0123456789+-/*";

    if(argc != 2)
    {
        std::cout << "Invalid arguments!" << std::endl;
        return(false);
    }
    for(int i=0; argv[1][i]; i++)
    {
        if(tokens.find(argv[1][i]) == std::string::npos)
        {
            std::cout << "Invalid expression!" << std::endl;
            return(false);
        }
    }
    return(true);
}

void RPN::executeOperation(char exp)
{
    int tempTop = _stack.top();
    int valueCalculed;

    _stack.pop();
    if(_stack.empty())
        return;
    switch (exp)
    {
        case '+': 
            valueCalculed = _stack.top() + tempTop;
            break;
        case '-':
            valueCalculed = _stack.top() - tempTop;
            break;
        case '*':
            valueCalculed = _stack.top() * tempTop;
            break;
        case '/':
            valueCalculed = _stack.top() / tempTop;
            break;
        default:
            break;
    }
    _stack.pop();
    _stack.push(valueCalculed);
}

bool RPN::calc(char *exp)
{
    std::string tokens = "+-/*";

    for(int i=0; exp[i]; i++)
    {
        if(exp[i] != ' ')
        {
            if(tokens.find(exp[i]) != std::string::npos)
                executeOperation(exp[i]);
            else
                _stack.push(atoi(&exp[i]));
        }
    }
    if(_stack.size() != 1)
    {
        std::cout << "Invalid expression!" << std::endl;
        return(false);
    }
    _result = _stack.top();

    return(true);
}
