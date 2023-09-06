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
			phonebook.getContact(0); 
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
 /* 		phonebook.addContact(0, "Jorginho", "12345");
		phonebook.getContact(0); */
		//	std::cout << "command: SEARCH\n";
