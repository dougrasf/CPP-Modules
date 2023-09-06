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
        void addContact(int index);
		void add(void);
        void getContact(int index);
};

#endif
