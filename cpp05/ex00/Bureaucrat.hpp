/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:50:58 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/08 14:14:06 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat 
{
    private:
        const std::string _name;
        int _grade;
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

        Bureaucrat(void);
        Bureaucrat(const std::string name, const int grade);
        Bureaucrat(const Bureaucrat &old);
        ~Bureaucrat(void);
        Bureaucrat &operator=(const Bureaucrat &old);
        
        std::string getName(void) const;
        int getGrade(void) const;

        void incrementGrade(void);
        void decrementGrade(void);

};

std::ostream &operator<<(std::ostream &old, const Bureaucrat &obj);
