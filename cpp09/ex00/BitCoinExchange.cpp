/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:07:46 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/12 21:48:17 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitCoinExchange.hpp"

//------------ OCF
BitCoinExchange::BitCoinExchange(void)
{
    std::ifstream       _dbFile;
    std::string         buffer;
	std::string		    date;
	std::string		    exchange_rate;

    std::cout << "Default constructor called!" << std::endl;
    _dbFile.open("data.csv");
    if(!_dbFile.is_open())
    {
        std::cout << "Error: could not open data.csv file." << std::endl;
        return;
    }

    while(getline(_dbFile, buffer))
    {
        std::stringstream   inputString(buffer);
		std::getline(inputString, date, ',');
		std::getline(inputString, exchange_rate);

		this->_data[date] = atof(exchange_rate.c_str());           
    }

    _dbFile.close();
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
    std::cout << "Copy assignment operator called!" << std::endl;
    if(this != &old)
    {
        this->_data = old._data;
    }
    return(*this);
}
//------------

bool BitCoinExchange::verifyArgs(int argc, char *argv[])
{
    if(argc != 2)
    {
        std::cout << "Error: invalid arguments!" << std::endl;
        return(false);
    }

    _inputFile.open(argv[1]);
    if(!_inputFile.is_open())
    {
        std::cout << "Error: could not open input file." << std::endl;
        return(false);
    }

    return(true);
}

int BitCoinExchange::btc(void)
{
    std::string buffer;
    std::string		    date;
	std::string		    value;

    while(getline(_inputFile, buffer))
    {
        
    }   
}