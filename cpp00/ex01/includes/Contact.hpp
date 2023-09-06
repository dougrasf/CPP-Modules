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
        std::string infos[4];
    public:
        std::string getnum(void);
        void setnum(std::string num);
        std::string getname(void);
        void setname(std::string name);
        void setindex(int i);
        int getindex(void);
        void printinfos();
};

#endif