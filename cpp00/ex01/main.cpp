/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:03:13 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/21 19:49:53 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string command;

	std::cout << 
		"\n---------------------------\n" << 
		"Welcome to your Phonebook!!\n" <<
	 	"---------------------------\n\n" << 
		"Commands: ADD, SEARCH and EXIT\n\n" <<
		"ADD: save a new contact\n" <<
		"SEARCH: display a specific contact\n" <<
		"EXIT: the program quits and the contacts are lost forever!\n" <<
		"\nEnter with a command:";
	std::getline (std::cin,command);

	while(true)
	{
		if(command == "ADD")
	       		phonebook.add();
		else if(command == "SEARCH")
			phonebook.search(); 
		else if(command == "EXIT")
		{
			std::cout <<
			"\n---------\n" << 
			"Bye bye!!\n" <<
	 		"---------\n\n";
			return(0);
		}
		else
			std::cout << 
					"\nInvalid command!! Try again\n" <<
			       	"ADD: save a new contact\n" << 
					"SEARCH: display a specific contact\n" <<
			        "EXIT: close PhoneBook\n\n";
		std::cout << "Please enter with a command:";
		std::getline (std::cin,command); 
	}
	return(0);
}
