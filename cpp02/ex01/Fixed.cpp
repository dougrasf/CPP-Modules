/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:16:39 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/16 20:01:08 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractional = 8;

Fixed::Fixed(void) : _fixed(0)
{
    std::cout << "Default constructor called!" << std::endl;
}

Fixed::Fixed(const int value)
{
    std::cout << "Integer constructor called!" << std::endl;
	_fixed = value * 256; // Move o ponto decimal para a direita em 8 bits, reservando 8 bits para parte fracionaria e 24 bits para parte inteira
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called!" << std::endl;
	_fixed = roundf(value * 256);
}

Fixed::Fixed(const Fixed &old)
{
    std::cout << "Copy constructor called!" << std::endl;
    *this = old;
}

Fixed::~Fixed(void)
{
    std::cout << "Default destructor called!" << std::endl;
}

int Fixed::getRawBits(void) const 
{
	std::cout << "Member function getRawBits called" << std::endl;
	return (_fixed);
}

void Fixed::setRawBits( int const raw ) 
{
	_fixed = raw;
}

float Fixed::toFloat(void) const
{
	return(static_cast<float>(_fixed) / (1 << _fractional));
}

int Fixed::toInt(void) const
{
	return(_fixed / 256);
}

Fixed &Fixed::operator=( const Fixed &old)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &old)
        this->_fixed = old.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &old, const Fixed &obj) 
{
	old << obj.toFloat();
	return (old);
}
