/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:26:39 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/03 21:44:51 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>
#include <map>

class Harl
{
    private:
        typedef void (Harl::*FnPtr)(void);
        void    debug(void);
        void    info(void);  
        void    warning(void);
        void    error(void);  
    public:
        void    complain(std::string level);
};

#endif