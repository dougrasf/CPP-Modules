#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
    public:
        void addContact(int index, std::string name, std::string num);
        void getContact(int index);
};

#endif