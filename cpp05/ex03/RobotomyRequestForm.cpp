/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:45:45 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/10 14:11:51 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:23:46 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/10 12:19:18 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// CONSTRUCTORS AND DESTRUCTOR
RobotomyRequestForm::RobotomyRequestForm(std::string target) 
: AForm("Robotomy", 145, 137), _target(target)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy", 145, 137)
{
    std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &old)
: AForm(old), _target(old._target)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm Default destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &old)
{
	(std::string)this->_target = old.getTarget();
	return (*this);
}

// GETTER
std::string RobotomyRequestForm::getTarget(void) const { return(_target); }


int RobotomyRequestForm::generateRandomInt(void) const 
{
    std::srand(static_cast<unsigned int>(std::time(0)));
	int randomInt = std::rand() % 10;

	return (randomInt);
}

void RobotomyRequestForm::beExecuted(Bureaucrat const &bureaucrat) const
{
    if (!this->getSigned() || bureaucrat.getGrade() > this->getGradeExecute())
		throw GradeTooHighException();
	if(this->generateRandomInt() <= 5)
		std::cout << GREEN_TEXT <<  this->getTarget() << " has been robotomized " << RESET_TEXT << std::endl;
	else
		std::cout << RED_TEXT << this->getTarget() << " the robotomy failed " << RESET_TEXT << std::endl;
}
