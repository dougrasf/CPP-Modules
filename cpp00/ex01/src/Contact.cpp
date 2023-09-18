/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:03:01 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/18 13:03:59 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::getfirstname(void){return(infos[firstname]);}
std::string Contact::getlastname(void){return(infos[lastname]);}
std::string Contact::getnickname(void){return(infos[nickname]);}
std::string Contact::getnum(void){return(infos[phonenumber]);}
std::string Contact::getsecret(void){return(infos[darkestsecret]);}
int Contact::getindex(void){return(this->index);}

void Contact::setfirstname(std::string fname){this->infos[firstname] = fname;}
void Contact::setlastname(std::string lname){this->infos[lastname] = lname;}
void Contact::setnickname(std::string nname){infos[nickname] = nname;}
void Contact::setnum(std::string num){infos[phonenumber] = num;}
void Contact::setsecret(std::string secret){infos[darkestsecret] = secret;}
void Contact::setindex(int i){index = i;}
void Contact::setinfos(std::string data[6], int index)
{
    setfirstname(data[firstname]);
    setlastname(data[lastname]);
    setnickname(data[nickname]);
    setnum(data[phonenumber]);
    setsecret(data[darkestsecret]);
    setindex(index);
}

Contact::Contact() 
{
    for (int i = 0; i < 5; i++) 
        infos[i] = "         ";
    setindex(0);
}

std::string Contact::treatString(const std::string inputString)
{
    std::string result;

    if (inputString.length() > 9)
        result = inputString.substr(0, 9) + ".";
    else 
    {
        result = inputString;
        while (result.length() < 10)
            result += " ";
    }
    return (result);
}

void Contact::printphonebook(void)
{
    std::cout << 
            getindex() << "         |" << 
            treatString(getfirstname()) << "|" << 
            treatString(getlastname()) << "|" << 
            treatString(getnickname()) << "|" << 
            std::endl;
}

void Contact::printinfos(void)
{
    std::cout << 
    "Name:" << getfirstname() << std::endl << 
    "Last Name:" << getlastname() << std::endl << 
    "Nick Name:" << getnickname() << std::endl <<
    "Phone Number:" << getnum() << std::endl << 
    "Darkest Secret:" << getsecret() << std::endl << 
    std::endl;
}
