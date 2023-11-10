/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:45:45 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/10 16:05:32 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:23:46 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/10 12:19:18 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// CONSTRUCTORS AND DESTRUCTOR
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
: AForm("Shruberry", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shruberry", 145, 137)
{
    std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &old)
: AForm(old), _target(old._target)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm Default destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &old)
{
	(std::string)this->_target = old.getTarget();
	return (*this);
}

// GETTER
std::string ShrubberyCreationForm::getTarget(void) const { return(_target); }

void ShrubberyCreationForm::file(void) const
{
    std::string		fileName = this->_target + "_shrubbery";
	std::ofstream 	file(fileName.c_str());

	if (!file.is_open())
		std::cout << "Error in create file" << std::endl;
	file << TREE << std::endl;
	file.close();
}

void ShrubberyCreationForm::beExecuted(Bureaucrat const &bureaucrat) const
{
    if (!this->getSigned() || bureaucrat.getGrade() > this->getGradeExecute())
		throw GradeTooHighException();
    file();
}