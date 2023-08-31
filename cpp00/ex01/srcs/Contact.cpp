#include "Contact.hpp"

int Contact::getnum(void)
{
    return(num);
}

void Contact::setnum(int num)
{
    this->num = num;
}

std::string Contact::getname(void)
{
    return(name);
}

void Contact::setname(std::string name)
{
    this->name = name;
}
