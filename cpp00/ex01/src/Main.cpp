/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:03:13 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/11 16:17:16 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string command;
   
	std::cout << "Welcome to your Phonebook!!\nPlease enter with a command:";
	std::getline (std::cin,command);

	while(true)
	{
		if(command == "ADD")
	       		phonebook.add();
		else if(command == "SEARCH")
			phonebook.search(); 
		else if(command == "EXIT")
			return(0);
		else
			std::cout << "\nInvalid command!! Try again\n" <<
			       	"ADD: save a new contact\n" << 
					"SEARCH: display a specific contact\n" <<
			        "EXIT: close PhoneBook\n\n";
		std::cout << "Please enter with a command:";
		std::getline (std::cin,command); 
	}
	return(0);
}
