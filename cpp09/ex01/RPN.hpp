/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:00:10 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/11 17:57:37 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <cstdlib>

class RPN
{
    public:
        RPN(void);
        RPN(const RPN &old);
        RPN &operator=(const RPN &old);
        ~RPN(void);

        bool validArgs(int argc, char *argv[]);
        bool calc(char *exp);
        void executeOperation(char exp);
        int getResult(void);

    private:
         std::stack<int>    _stack;
         int                _result;
};
