/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:22:29 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/17 15:51:04 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdlib.h>

class Base
{
    public:
        virtual ~Base(void){};
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);