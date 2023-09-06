#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;
    
    phonebook.addContact(0, "Jorginho", "12345");
    phonebook.getContact(0);
    return(0);
}
