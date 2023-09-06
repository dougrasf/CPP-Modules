#include "PhoneBook.hpp"

// Get
std::string Contact::getfirstname(void){return(infos[firstname]);}
std::string Contact::getlastname(void){return(infos[lastname]);}
std::string Contact::getnickname(void){return(infos[nickname]);}
std::string Contact::getnum(void){return(infos[phonenumber]);}
std::string Contact::getsecret(void){return(infos[darkestsecret]);}
int Contact::getindex(void){return(this->index);}

// Set
void Contact::setfirstname(std::string fname){this->infos[firstname] = fname;}
void Contact::setlastname(std::string lname){this->infos[lastname] = lname;}
void Contact::setnickname(std::string nname){infos[nickname] = nname;}
void Contact::setnum(std::string num){infos[phonenumber] = num;}
void Contact::setsecret(std::string secret){infos[darkestsecret] = secret;}
void Contact::setindex(int i){index = i;}

// Utils
void Contact::printinfos(){for(int i = 0; i < 4; i++){std::cout << infos[i] << std::endl;}}
