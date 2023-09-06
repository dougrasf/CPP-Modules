#include "PhoneBook.hpp"

void PhoneBook::addContact(int index)
{
	std::string data[6];

	std::cout << "\nAdding a new contact\n";
	contact[index].setindex(index);
		
	while (data[firstname].empty())
	{
	       std::cout << "First name:";
	       std::getline(std::cin,data[firstname]);
	}
	contact[index].setfirstname(data[firstname]);
        
	while (data[lastname].empty())
	{
		std::cout << "Last name:";
		std::getline(std::cin, data[lastname]);
	}
	contact[index].setlastname(data[lastname]);

	while (data[nickname].empty())
	{
		std::cout << "Nick name:";
		std::getline(std::cin, data[nickname]);
	}
	contact[index].setnickname(data[nickname]);
	
	while (data[phonenumber].empty())
	{
		std::cout << "Phone number:";
		std::getline(std::cin, data[phonenumber]);
	}
	contact[index].setnum(data[phonenumber]);
	
	while (data[darkestsecret].empty())
	{
		std::cout << "Darkest Secret:";
		std::getline(std::cin, data[darkestsecret]);
	}
	contact[index].setsecret(data[darkestsecret]);

}

void PhoneBook::add(void)
{
	static int i;

	if (i >= 0 && i < 8)
		addContact(i);
	else if(i > 8)
	{
		std::cout << "Numero máximo de contatos\n";
	}
	i++;
}

void PhoneBook::getContact(int index)
{
    if (index >= 0 && index < 8)
        contact[index].printinfos();
    else
        std::cout << "Índice fora do intervalo";
}
