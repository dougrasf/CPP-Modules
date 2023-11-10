/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:23:46 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/10 12:19:18 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//THROWS
const char *AForm::GradeTooHighException::what() const throw() 
{ 
    return "Grade is too high!"; 
}
const char *AForm::GradeTooLowException::what() const throw() 
{ 
    return "Grade is too low!"; 
}

// CONSTRUCTORS AND DESTRUCTOR
AForm::AForm(std::string name, const int grade, const int gradeExecute) 
: _name(name), _signed(false), _grade(grade), _gradeExecute(gradeExecute)
{
    std::cout << "AForm constructor called" << std::endl;
	if(_grade < 1 || _gradeExecute < 1)
		throw AForm::GradeTooHighException();
	if(_grade > 150 || _gradeExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(void)
: _name(""), _signed(false), _grade(1), _gradeExecute(1)
{
    std::cout << "AForm Default constructor called" << std::endl;
}

AForm::AForm(AForm &old)
: _name(old._name), _signed(false), _grade(old._grade), _gradeExecute(old._gradeExecute)
{
    std::cout << "AForm copy constructor called" << std::endl;
}

AForm::~AForm(void)
{
    std::cout << "AForm Default destructor called" << std::endl;
}

AForm &AForm::operator=( const AForm &old)
{
	(std::string)this->_name = old.getName();
	(int&)this->_grade = old.getGrade();
	(int&)this->_gradeExecute = old.getGradeExecute();
	this->_signed = old.getSigned();
	return (*this);
}

// GETTER
std::string AForm::getName(void) const { return(_name); }
int AForm::getGrade(void) const { return(_grade); }
bool AForm::getSigned(void) const { return(_signed);}
int AForm::getGradeExecute(void) const { return(_gradeExecute);}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrade() > _grade)
		throw  AForm::GradeTooLowException();
	_signed = true;
}

std::ostream	&operator<<(std::ostream &old, const AForm &obj)
{
	old << "Name=" << obj.getName() << std::endl;
	old << "Grade=" << obj.getGrade() << std::endl;
	old << "GradeExecute=" << obj.getGradeExecute() << std::endl;
	old << "Signed=" << obj.getSigned() << std::endl;
	old << std::endl;

	return old;
}
