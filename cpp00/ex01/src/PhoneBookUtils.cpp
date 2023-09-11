/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookUtils.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:03:21 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/11 15:52:49 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::stringToInt(const std::string str)
{
    int result = 0;
    int sign = 1;

    size_t i = 0;
    if (str[0] == '-')
    {
        sign = -1;
        i = 1;
    }
    else if (str[0] == '+')
    {
        i = 1;
    }

    for (; i < str.length(); ++i)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + (str[i] - '0');
        }
    }
    return sign * result;
}

int PhoneBook::isNumeric(std::string data) 
{
    int index, check = 0;

    for (index = 0; data[index]; index++) 
	{
    	if (data[index] >= '0' && data[index] <= '9')
        	check++;
    	else 
		{
			check = 0;
			break;
    	}
    }
    if (check != 0) 
      return (0);
    else 
      return (1);
}

std::string PhoneBook::treatString(const std::string inputString)
{
    std::string result;

    if (inputString.length() > 9) {
        result = inputString.substr(0, 9) + ".";
    } else {
        result = inputString;
        while (result.length() < 10) {
            result += " ";
        }
    }
    return result;
}
