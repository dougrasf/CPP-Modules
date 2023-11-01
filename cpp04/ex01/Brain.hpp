/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 22:25:51 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/30 22:33:28 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
  protected:
        std::string	_ideas[100];
  public:
        Brain(void);
        Brain(const Brain &old);
        virtual ~Brain(void);
        Brain &operator=(const Brain &old);
        
        std::string *getBrain(void);
};