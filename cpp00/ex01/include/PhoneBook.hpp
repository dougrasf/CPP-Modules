/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:02:51 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/11 15:52:39 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
        std::string data[6];
    public:
		void add(void);
        void search(void);
 
        void addNewContact(void);
        void getInfos(void);
        void clearInfos(void);
 
        int stringToInt(const std::string str);
        int isNumeric(std::string data);
        std::string treatString(const std::string inputString);

};

#endif
