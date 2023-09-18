/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:03:21 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/18 12:57:43 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::getInfos(void)
{
	while (data[firstname].empty())
	{
	   std::cout << "First name:";
	   std::getline(std::cin, data[firstname]);
	   if(data[firstname].length() > 25)
		{
			data[firstname] = "";
			std::cout << "Max length 25 of character" << std::endl;
		}
	}

	while (data[lastname].empty())
	{
		std::cout << "Last name:";
		std::getline(std::cin, data[lastname]);
		if(data[lastname].length() > 25)
		{
			data[lastname] = "";
			std::cout << "Max length 25 of character" << std::endl;
		}
	}

	while (data[nickname].empty())
	{
		std::cout << "Nick name:";
		std::getline(std::cin, data[nickname]);
		if(data[nickname].length() > 25)
		{
			data[nickname] = "";
			std::cout << "Max length 25 of character" << std::endl;
		}
	}

	while (data[phonenumber].empty())
	{
		std::cout << "Phone number:";
		std::getline(std::cin, data[phonenumber]);
		if(isNumeric(data[phonenumber]) != 0 || data[phonenumber].length() > 25)
		{	
			data[phonenumber] = "";	
			std::cout << "Only numbers are allowed in this field and max length 25 of character" << std::endl;
		}
	}

	while (data[darkestsecret].empty())
	{
		std::cout << "Darkest Secret:";
		std::getline(std::cin, data[darkestsecret]);
		if(data[darkestsecret].length() > 25)
		{
			data[darkestsecret] = "";
			std::cout << "Max length 25 of character" << std::endl;
		}
	}
}

void PhoneBook::add(void)
{
	static int i;

	std::cout << "\nAdding a new contact\n";
	if (i >= 0 && i < 8)
	{
		getInfos();
		contact[i].setinfos(data, i);
		std::cout << std::endl;
		clearInfos();
		i++;
	}
	else if(i >= 8)
	{
		std::cout << "Your Phone Book is full, the oldest contact will be excluded to add the new one!\n";
		getInfos();
		addNewContact();
		std::cout << std::endl;
		clearInfos();
	}
}

void PhoneBook::search(void)
{
	std::string index = "";
	std::string data[3];
	int i = 0;

	std::cout << "Index     |First Name|Last Name |Nick Name |\n";
	while(i < 8)
	{
		contact[i].printphonebook();
		i++;
	}
	while (index.empty())
		{
			std::cout << "\nIndex to search (0-7):";
			std::getline(std::cin, index);
			if(isNumeric(index) != 0)
			{	
				std::cout << "Only numbers are allowed in this field" << std::endl;
				index = "";	
			}			
		}
	i = stringToInt(index);
	if(i < 0 || i > 7)
	{
		std::cout << "Index out of range\n";
		return;
	}
	contact[i].printinfos();
}
