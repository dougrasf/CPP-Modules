/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:16:39 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/18 22:36:58 by dofranci         ###   ########.fr       */
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
	_fixed = value * 256;
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


bool Fixed::operator<(const Fixed &old)
{
	return (this->_fixed < old._fixed);
}

bool Fixed::operator>(const Fixed &old)
{
	return (this->_fixed > old._fixed);
}

bool Fixed::operator>=(const Fixed &old)
{
	return (this->_fixed >= old._fixed);
}

bool Fixed::operator<=(const Fixed &old)
{
	return (this->_fixed <= old._fixed);
}

bool Fixed::operator==(const Fixed &old)
{
	return (this->_fixed == old._fixed);
}

bool Fixed::operator!=(const Fixed &old)
{
	return (this->_fixed != old._fixed);
}


Fixed Fixed::operator+(const Fixed &old)
{
	return(this->toFloat() + old.toFloat());	
}

Fixed Fixed::operator-(const Fixed &old)
{
	return(this->toFloat() - old.toFloat());	
}

Fixed Fixed::operator*(const Fixed &old)
{
	return(this->toFloat() * old.toFloat());	
}

Fixed Fixed::operator/(const Fixed &old)
{
	return(this->toFloat() / old.toFloat());	
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
	
	temp._fixed = this->_fixed;
	this->_fixed += 1;
	return(temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp;
	
	temp._fixed = this->_fixed;
	this->_fixed -= 1;
	return(*this);
}

Fixed Fixed::operator++(void)
{
	this->_fixed++;
	return(*this);
}

Fixed Fixed::operator--(void)
{
	this->_fixed--;
	return(*this);
}
