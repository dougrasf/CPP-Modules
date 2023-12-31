/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:50:50 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/08 15:33:02 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// CONSTRUCTORS AND DESTRUCTOR 
Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat Constructor called" << std::endl;
    if(_grade <= 0)
        throw Bureaucrat::GradeTooHighException();
    if(_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(1) { std::cout << "Bureaucrat Default constructor called" << std::endl; }
Bureaucrat::Bureaucrat(const Bureaucrat &old) : _name(old._name), _grade(old._grade) { std::cout << "Bureaucrat Copy constructor called" << std::endl; }
Bureaucrat::~Bureaucrat(void) { std::cout << "Bureaucrat Destructor called" << std::endl; }

//THROWS
const char *Bureaucrat::GradeTooHighException::what() const throw() { return "Grade is too high!"; }
const char *Bureaucrat::GradeTooLowException::what() const throw() { return "Grade is too low!"; }

//GETTER
std::string Bureaucrat::getName(void) const { return(_name); }
int Bureaucrat::getGrade(void) const { return(_grade); }

//INCREMENT AND DECREMENT
void Bureaucrat::incrementGrade(void)
{
    std::cout << "Grade increment called" << std::endl;
    if(_grade - 1 <= 0)
        throw Bureaucrat::GradeTooHighException();
    _grade -= 1;
}

void Bureaucrat::decrementGrade(void)
{
    std::cout << "Grade decrement called" << std::endl;
    if(_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
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
	old << obj.getName() << ", bureaucrat grade " << obj.getGrade(); 
	return (old);
}
