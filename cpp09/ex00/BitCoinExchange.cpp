/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:07:46 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/29 07:13:55 by dofranci         ###   ########.fr       */
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
    std::cout << "Copy assignment operator called!" << std::endl;
    if(this != &old)
    {
        this->_data = old._data;
    }
    return(*this);
}
//------------

static bool ftReturn(std::string errorOutput, int value)
{
    std::cout << errorOutput << std::endl;
    if(value == 1)
        return(false);
    return(true);
}

bool BitCoinExchange::verifyArgs(int argc, char *argv[])
{
    if(argc != 2)
        return(ftReturn("Error: invalid arguments!", 1));

    _inputFile.open(argv[1]);
    if(!_inputFile.is_open())
        return(ftReturn("Error: could not open input file.", 1));

    return(true);
}

bool BitCoinExchange::setDatabase(void)
{
    std::ifstream _dbFile("data.csv");
    std::string buffer;
    double exchange_rate;

    if(!_dbFile.is_open())
        return(ftReturn("Error: could not open data.csv file.", 1));

    getline(_dbFile, buffer);
    if(buffer.compare("date,exchange_rate") != 0)
        return(ftReturn("Error: invalid header from data.csv", 1));
    while(getline(_dbFile, buffer))
    {
        char date[buffer.size() + 1];
        if(sscanf(buffer.c_str(), "%[^,],%lf", date, &exchange_rate) == 2)
            _data[date] = exchange_rate;
        else
            return(ftReturn("Error: converting exchange rate.", 1));
    }

    _dbFile.close();
    return(true);
}

static bool validDate(char *date)
{
    int day, month, year;
    
    if(sscanf(date, "%i-%i-%i", &year, &month, &day) == 3)
    {
        if(month > 12 || day > 31)
            return(ftReturn("Error: invalid date.", 1));
    }
    return(true);
}

static bool validValue(float value)
{
    if(value > 1000)
        return(ftReturn("Error: too large a number", 1));
    if(value < 0)
        return(ftReturn("Error: not a positive number", 1));
    return(true);
}

std::string BitCoinExchange::findClosest(char *date)
{
    std::map<std::string, float>::iterator it = _data.lower_bound(date);
    if (it != _data.begin())
        --it;
    return(it->first);
}

int BitCoinExchange::btc(void)
{
    std::string buffer;
	float       value;

    getline(_inputFile, buffer);
    while(getline(_inputFile, buffer))
    {
        char date[buffer.size() + 1];
        if(sscanf(buffer.c_str(), "%s | %f", date, &value) == 2)
        {
            if(validValue(value) == true && validDate(date) == true)
            {
                std::string _closestDate = date;
                if(_data.find(date) == _data.end())
                    _closestDate = findClosest(date);
                std::cout << date << " => " << value << " = " << _data[_closestDate] * value << std::endl;
            }
        }
        else
            std::cout << "Error: bad input => " << date << std::endl;
    }
    return(0);
}
