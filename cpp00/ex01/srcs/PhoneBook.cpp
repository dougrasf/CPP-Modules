#include "PhoneBook.hpp"

void PhoneBook::addContact(int index, std::string name, std::string num)
{
    if (index >= 0 && index < 8)
    {
        contact[index].setindex(index);
        contact[index].setname(name);
        contact[index].setnum(num);
    }
    //else if (user tries to add a 9th contact)
    //{
    //  replace the oldest one by the new one
    //}
}

void PhoneBook::getContact(int index)
{
    if (index >= 0 && index < 8)
        contact[index].printinfos();
    else
        std::cout << "Índice fora do intervalo";
}