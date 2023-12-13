/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:19:36 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/12 19:52:28 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[])
{
    RPN _rpn;
    
    if(!_rpn.validArgs(argc, argv))
        return (1);
    if(!_rpn.calc(argv[1]))
        return (2);
    std::cout << _rpn.getResult() << std::endl;

    return (0);
}
