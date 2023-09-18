/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookUtils.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:03:21 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/18 12:57:52 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::clearInfos(void)
{
	data[firstname] = "";
	data[lastname] = "";
	data[nickname] = "";
	data[phonenumber] = "";
	data[darkestsecret] = "";
}

void PhoneBook::addNewContact()
{
	static int index;

	for(int i = 0; i < 8; i++)
	{
		if(contact[i].getindex() == index)
			contact[i].setinfos(data, 8);
	}
	index++;
	if(index >= 8)
		index = 0;
}

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
