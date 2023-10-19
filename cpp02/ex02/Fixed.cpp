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

// Constructors and Destructors // 
Fixed::Fixed(void) : _fixed(0) {}

Fixed::Fixed(const int value) { _fixed = value * 256; }

Fixed::Fixed(const float value) { _fixed = roundf(value * 256); }

Fixed::Fixed(const Fixed &old) { *this = old; }

Fixed::~Fixed(void) {}


// Member Functions //
int Fixed::getRawBits(void) const { return (_fixed); }

void Fixed::setRawBits( int const raw ) { _fixed = raw; }

float Fixed::toFloat(void) const { return(static_cast<float>(_fixed) / (1 << _fractional)); }

int Fixed::toInt(void) const { return(_fixed / 256); }

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if(a._fixed < b._fixed)
		return(a);
	return(b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if(a._fixed > b._fixed)
		return(a);
	return(b);
}

Fixed const &Fixed::min(const Fixed  &a, const Fixed &b)
{
	if(a._fixed < b._fixed)
		return(a);
	return(b);
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
	if(a._fixed > b._fixed)
		return(a);
	return(b);
}

// Overload Operators // 
Fixed &Fixed::operator=( const Fixed &old)
{
	if (this != &old)
        this->_fixed = old.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &old, const Fixed &obj) 
{
	old << obj.toFloat();
	return (old);
}

// Comparison Operators //
bool Fixed::operator<(const Fixed &old) { return (this->_fixed < old._fixed); }
bool Fixed::operator>(const Fixed &old) { return (this->_fixed > old._fixed); }
bool Fixed::operator>=(const Fixed &old) { return (this->_fixed >= old._fixed); }
bool Fixed::operator<=(const Fixed &old) { return (this->_fixed <= old._fixed); }
bool Fixed::operator==(const Fixed &old) { return (this->_fixed == old._fixed); }
bool Fixed::operator!=(const Fixed &old) { return (this->_fixed != old._fixed); }

// Arithmetic Operators // 
Fixed Fixed::operator+(const Fixed &old) { return(this->toFloat() + old.toFloat()); }
Fixed Fixed::operator-(const Fixed &old) { return(this->toFloat() - old.toFloat()); }
Fixed Fixed::operator*(const Fixed &old) { return(this->toFloat() * old.toFloat()); }
Fixed Fixed::operator/(const Fixed &old) { return(this->toFloat() / old.toFloat()); }

// Increment/Decrement Operators //
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
	return(temp);
}

Fixed Fixed::operator++(void)
{
	this->_fixed += 1;
	return(*this);
}

Fixed Fixed::operator--(void)
{
	this->_fixed -= 1;
	return(*this);
}
