/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:02:42 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/11 16:07:13 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

enum data
{
	firstname,
    lastname,
    nickname,
    phonenumber,
    darkestsecret,
};

class Contact
{
    private:
	int index;
	std::string infos[5];
    public:

        std::string getfirstname(void);
        void setfirstname(std::string fname);

	    std::string getlastname(void);
        void setlastname(std::string lname);

	    std::string getnickname(void);
        void setnickname(std::string nname);

        std::string getnum(void);
        void setnum(std::string num);

	    std::string getsecret(void);
        void setsecret(std::string secret);

	    int getindex(void);
	    void setindex(int i);

        void setinfos(std::string data[6], int index);
	    void printinfos(void);
};

#endif
