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
	std::string infos[6];
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
	
	void printinfos();
};

#endif
