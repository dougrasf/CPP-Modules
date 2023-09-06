#include "PhoneBook.hpp"

// Get
std::string Contact::getnum(void){return(infos[phonenumber]);}
std::string Contact::getname(void){return(infos[firstname]);}
int Contact::getindex(void){return(index);}

// Set
void Contact::setnum(std::string num){infos[phonenumber] = num;}
void Contact::setname(std::string name){this->infos[firstname] = name;}
void Contact::setindex(int i){this->index = i;}

// Utils
void Contact::printinfos(){for(int i = 0; i < 4; i++){std::cout << infos[i] << std::endl;}}
