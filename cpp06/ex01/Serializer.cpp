/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:03:58 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/16 22:17:10 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

//CONSTRUCTOR and DESTRUCTOR
Serializer::Serializer(void){ std::cout << "Serializer default constructor called" << std::endl; }

Serializer::Serializer(Serializer const &old)
{
    std::cout << "Serializer copy constructor called" << std::endl;
    *this = old;
}

Serializer::~Serializer(void){ std::cout << "Serializer destructor called" << std::endl; }

//OVERLOAD, ASSIGNMENT OPERATOR
Serializer &Serializer::operator=(Serializer const &old)
{
    std::cout << "Serializer assignment operator called" << std::endl;
    (void)old;
    return *this;    
}

uintptr_t Serializer::serializer(Data *ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserializer(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}

std::ostream &operator<<(std::ostream &old, const Data &ptr)
{
    old << "Type: " << ptr._type << std::endl;  
    old << "Value: " << ptr._value << std::endl;
    old << "Amount: " << ptr._amount << std::endl;
    return(old);
}
