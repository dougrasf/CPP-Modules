/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:00:10 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/08 14:08:29 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class BitCoinExchange
{
    public:
        BitCoinExchange(void);
        BitCoinExchange(const BitCoinExchange &old);
        BitCoinExchange &operator=(const BitCoinExchange &old);
        ~BitCoinExchange(void);
    private:
           
}