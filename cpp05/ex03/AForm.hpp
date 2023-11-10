/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:23:53 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/10 12:18:49 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool _signed;
        const int _grade;
        const int _gradeExecute;
    public:
        class GradeTooHighException : public std::exception 
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception 
        {
            public:
                const char* what() const throw();
        };

        AForm(void);
        AForm(std::string name, const int grade, const int gradeExecute);
        AForm(AForm &old);
        virtual ~AForm();
        AForm &operator=(const AForm &old);

        std::string	        getName(void) const ;
		int					getGrade(void) const ;
		int					getGradeExecute(void) const ;
		bool				getSigned(void) const ;

        void				beSigned(Bureaucrat &bureaucrat);
        virtual void		beExecuted(Bureaucrat const &bureaucrat) const = 0;
};

std::ostream &operator<<(std::ostream &old, const AForm &obj);
