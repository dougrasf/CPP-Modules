/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:00:10 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/15 19:23:26 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <sstream>

class BitCoinExchange
{
    public:
        BitCoinExchange(void);
        BitCoinExchange(const BitCoinExchange &old);
        BitCoinExchange &operator=(const BitCoinExchange &old);
        ~BitCoinExchange(void);

        bool        verifyArgs(int argc, char *argv[]);
        bool        setDatabase(void);
        std::string         findClosest(char *date);
        int         btc(void);
    private:
        std::map<std::string, float>    _data;
        std::ifstream                   _inputFile;

};
