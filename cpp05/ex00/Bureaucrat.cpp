#include "Bureaucrat.hpp"

// CONSTRUCTOR AND DESTRUCTOR 
Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(0)
{
    std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &old) : _name(old._name), _grade(old._grade)
{
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

//GETTER
std::string Bureaucrat::getName(void) const{return(_name);}
int Bureaucrat::getGrade(void) const{return(_grade);}

//INCREMENT AND DECREMENT
void Bureaucrat::incrementGrade(void)
{
    if(_grade - 1 < 1)
        std::cout << "grade too high" << std::endl;
    _grade -= 1;
}

void Bureaucrat::decrementGrade(void)
{
    if(_grade + 1 > 150)
        std::cout << "grade too low" << std::endl;
    _grade += 1;
}

//OPERATORS OVERLOAD
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &old)
{
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	if (this != &old)
    {
        (std::string)_name = old._name;
        _grade = old._grade;
    }
    return (*this);
}

std::ostream	&operator<<(std::ostream &old, const Bureaucrat &obj) 
{
	old << obj.getName();
	return (old);
}