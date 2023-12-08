/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:07:46 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/08 10:15:23 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitCoinExchange.hpp"

//------------ OCF
BitCoinExchange::BitCoinExchange(void)
{
    std::cout << "Default constructor called!" << std::endl;
}

BitCoinExchange::BitCoinExchange(const BitCoinExchange &old)
{
    std::cout << "Copy constructor called!" << std::endl;
    *this = old;
}

BitCoinExchange::~BitCoinExchange(void)
{
    std::cout << "Default destructor called!" << std::endl;
}

BitCoinExchange &BitCoinExchange::operator=(const BitCoinExchange &old)
{
    std::cout << "Span copy assignment operator called!" << std::endl;
    if(*this != old)
        this = old;
    return(*this);
}
//------------

