/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
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

class Form
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

        Form(void);
        Form(std::string name, const int grade, const int gradeExecute);
        Form(Form &old);
        ~Form();
        Form &operator=(const Form &old);

        std::string	        getName(void) const ;
		int					getGrade(void) const ;
		int					getGradeExecute(void) const ;
		bool				getSigned(void) const ;

        void				beSigned(Bureaucrat &bureaucrat);
        void				beExecuted(Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &old, const Form &obj);
