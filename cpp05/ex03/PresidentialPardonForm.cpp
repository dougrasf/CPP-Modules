/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:45:45 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/10 14:11:51 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// CONSTRUCTORS AND DESTRUCTOR
PresidentialPardonForm::PresidentialPardonForm(std::string target) 
: AForm("Presidential", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Presidential", 145, 137)
{
    std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &old)
: AForm(old), _target(old._target)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm Default destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &old)
{
	(std::string)this->_target = old.getTarget();
	return (*this);
}

// GETTER
std::string PresidentialPardonForm::getTarget(void) const { return(_target); }



void PresidentialPardonForm::beExecuted(Bureaucrat const &bureaucrat) const
{
    if (!this->getSigned() || bureaucrat.getGrade() > this->getGradeExecute())
		throw GradeTooHighException();
	std::cout <<  this->getTarget() << " has been pardoned by Zaphod Beeblebrox " << std::endl;
}
