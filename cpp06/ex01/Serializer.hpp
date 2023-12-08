/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:04:00 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/16 22:16:38 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>

struct Data
{
    std::string _type;
    std::string _value;
    int         _amount;
};

class Serializer
{
    private:
        Serializer(void);
        Serializer(Serializer const &old);
        ~Serializer(void);
        Serializer &operator=(Serializer const &old);

    public:
        static uintptr_t serializer(Data *ptr);
        static Data* deserializer(uintptr_t raw);
};

std::ostream &operator<<(std::ostream &old, const Data &ptr);
