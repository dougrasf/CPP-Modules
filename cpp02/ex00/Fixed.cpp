/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:16:39 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/16 14:03:05 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractional = 8;

Fixed::Fixed(void) : _fixed(0)
{
    std::cout << "Default constructor called!" << std::endl;
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

int		Fixed::getRawBits(void) const 
{
	std::cout << "Member function getRawBits called" << std::endl;
	return (_fixed);
}

void 	Fixed::setRawBits( int const raw ) 
{
	_fixed = raw;
}

Fixed   &Fixed::operator=( const Fixed &old)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &old)
        this->_fixed = old.getRawBits();
	return (*this);
}
