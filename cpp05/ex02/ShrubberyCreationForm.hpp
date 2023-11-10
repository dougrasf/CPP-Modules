/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:39:51 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/10 16:07:41 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

#define TREE "       ###\n""      #o###\n""    #####o###\n""   #o#\\#|#/###\n""    ###\\|/#o#\n""     # }|{  #\n""       }|{\n"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm &old);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &old);

        std::string getTarget(void) const ;

        void        beExecuted(Bureaucrat const &bureaucrat) const;
        void        file(void) const;
};
