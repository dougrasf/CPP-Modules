/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:23:46 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/10 12:37:34 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//THROWS
const char *Form::GradeTooHighException::what() const throw() 
{ 
    return "Grade is too high!"; 
}
const char *Form::GradeTooLowException::what() const throw() 
{ 
    return "Grade is too low!"; 
}

// CONSTRUCTORS AND DESTRUCTOR
Form::Form(std::string name, const int grade, const int gradeExecute) 
: _name(name), _signed(false), _grade(grade), _gradeExecute(gradeExecute)
{
    std::cout << "Form constructor called" << std::endl;
	if(_grade < 1 || _gradeExecute < 1)
		throw Form::GradeTooHighException();
	if(_grade > 150 || _gradeExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(void)
: _name(""), _signed(false), _grade(1), _gradeExecute(1)
{
    std::cout << "Form Default constructor called" << std::endl;
}


Form::Form(Form &old)
: _name(old._name), _signed(false), _grade(old._grade), _gradeExecute(old._gradeExecute)
{
    std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(void)
{
    std::cout << "Form Default destructor called" << std::endl;
}

Form &Form::operator=( const Form &old)
{
	(std::string)this->_name = old.getName();
	(int&)this->_grade = old.getGrade();
	(int&)this->_gradeExecute = old.getGradeExecute();
	this->_signed = old.getSigned();
	return (*this);
}

// GETTER
std::string Form::getName(void) const { return(_name); }
int Form::getGrade(void) const { return(_grade); }
bool Form::getSigned(void) const { return(_signed);}
int Form::getGradeExecute(void) const { return(_gradeExecute);}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrade() > _grade)
		throw  Form::GradeTooLowException();
	_signed = true;
}

void Form::beExecuted(Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrade() > _gradeExecute)
		throw  Form::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &old, const Form &obj)
{
	old << "Name=" << obj.getName() << std::endl;
	old << "Grade=" << obj.getGrade() << std::endl;
	old << "GradeExecute=" << obj.getGradeExecute() << std::endl;
	old << "Signed=" << obj.getSigned() << std::endl;
	old << std::endl;

	return old;
}
