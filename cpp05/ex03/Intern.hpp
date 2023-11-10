/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:43:01 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/10 19:44:18 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        class exceptionForm : public std::exception
		{	
            public:
				char const *what() const throw();
		};
        Intern(void);
        Intern(Intern &old);
        ~Intern();
        Intern  &operator=(const Intern &old);

        AForm   *makeForm(const std::string form, const std::string target) const;
        AForm   *create_PresidentialPardon(const std::string target) const;
		AForm   *create_RobotomyRequest(const std::string target) const;
		AForm   *create_ShrubberyCreation(const std::string target) const;
};
