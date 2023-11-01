#pragma once

#include <iostream>

class Bureaucrat 
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat(void);
        Bureaucrat(const std::string name, const int grade);
        Bureaucrat(const Bureaucrat &old);
        ~Bureaucrat(void);
        Bureaucrat &operator=(const Bureaucrat &old);

        bool GradeTooHighException(const int grade);
        bool GradeTooLowException(const int grade);
        
        std::string getName(void) const;
        int getGrade(void) const;

        void incrementGrade(void);
        void decrementGrade(void);

};

std::ostream &operator<<(std::ostream &old, const Bureaucrat &obj);
