/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:03:01 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/11 16:46:18 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
Contact::Contact() 
{
    for (int i = 0; i < 5; i++) {
        infos[i] = "          ";
    }
    setindex(0);
}

void Contact::printinfos(void)
{
    std::cout << getindex() << "         |" << getfirstname() << "|" << getlastname() << "|" << getnickname() << "|" << std::endl;
}

void Contact::setinfos(std::string data[6], int index)
{
    setfirstname(data[firstname]);
    setlastname(data[lastname]);
    setnickname(data[nickname]);
    setnum(data[phonenumber]);
    setsecret(data[darkestsecret]);
    setindex(index);
}
