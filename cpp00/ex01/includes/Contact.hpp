#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{
    private:
        int         num;
        std::string name;
    public:
        int getnum(void);
        void setnum(int num);
        std::string getname(void);
        void setname(std::string name);
};

// class PhoneBook
// {
//     private:
    
// }

#endif