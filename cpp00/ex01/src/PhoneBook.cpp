/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:03:21 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/11 15:55:32 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::getInfos(void)
{
	while (data[firstname].empty())
	{
	   std::cout << "First name:";
	   std::getline(std::cin, data[firstname]);
	   data[firstname] = treatString(data[firstname]);
	}

	while (data[lastname].empty())
	{
		std::cout << "Last name:";
		std::getline(std::cin, data[lastname]);
		data[lastname] = treatString(data[lastname]);

	}

	while (data[nickname].empty())
	{
		std::cout << "Nick name:";
		std::getline(std::cin, data[nickname]);
		data[nickname] = treatString(data[nickname]);
	}

	while (data[phonenumber].empty())
	{
		std::cout << "Phone number:";
		std::getline(std::cin, data[phonenumber]);
		if(isNumeric(data[phonenumber]) != 0)
		{	
			std::cout << "Only numbers are allowed in this field" << std::endl;
			data[phonenumber] = "";	
		}
	}

	while (data[darkestsecret].empty())
	{
		std::cout << "Darkest Secret:";
		std::getline(std::cin, data[darkestsecret]);
	}
}

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
		contact[i].printinfos();
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
