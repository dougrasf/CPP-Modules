/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:42:59 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/10 19:44:00 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const char *Intern::exceptionForm::what() const throw() 
{ 
    return "Invalid form!"; 
}

Intern::Intern(void)
{
    std::cout << "Intern Default constructor called!" << std::endl;
}

Intern::Intern(Intern &old)
{
    std::cout << "Intern copy constructor called!" << std::endl;
    *this = old;
}

Intern::~Intern(void)
{
    std::cout << "Intern destructor called!" << std::endl;
}

Intern &Intern::operator=(const Intern &obj)
{
    (void)obj;
	return (*this);
}

AForm *Intern::create_PresidentialPardon(const std::string target) const
{
    return(new PresidentialPardonForm(target));
}

AForm *Intern::create_RobotomyRequest(const std::string target) const
{
    return(new RobotomyRequestForm(target));
}

AForm *Intern::create_ShrubberyCreation(const std::string target) const
{
    return(new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(const std::string form, const std::string target) const
{
    std::string formType[3] = {"shrubbery creation",
							   "robotomy request",
							   "presidential pardon",};
    AForm *(Intern::*f[3])(const std::string) const = 
    {
		&Intern::create_ShrubberyCreation,
		&Intern::create_RobotomyRequest,
		&Intern::create_PresidentialPardon,
    };
    
    for (int i = 0; i < 3; i++)
    {
        if (!formType[i].compare(form))
        {
            return ((this->*f[i])(target));
        }
    }
    throw Intern::exceptionForm();
}
