/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:56:36 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/08 10:10:34 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _size(0), _index(0), _vector(0)
{
	std::cout << "Span default constructor called!"	<< std::endl;
}

Span::Span(unsigned int n) : _size(n), _index(0), _vector(n)
{
	std::cout << "Span constructor called!"	<< std::endl;
}

Span::Span(const Span &old)
{
	std::cout << "Span copy constructor called!" << std::endl;
	*this = old;
}

Span::~Span(void)
{
	std::cout << "Span default destructor called!" << std::endl;
}

Span &Span::operator=(const Span &old)
{
	std::cout << "Span copy assignment operator called!" << std::endl;
	if(this != &old)
	{
		this->_index = old._index;
		this->_size = old._size;
		for(unsigned int i = 0; i < this->_index; i++)
			this->_vector[i] = old._vector[i];
	}
	return (*this);
}

unsigned int Span::operator[](const unsigned int index) const
{
	if(index >= this->_size)
		throw std::out_of_range("Invalid index in array");
	return(this->_vector[index]);
}

unsigned int Span::getSize(void) const
{
	return(this->_size);
}

void Span::addNumber(int number)
{
	try
	{
		if(this->_size < 2)
			throw std::out_of_range("Error: Insufficient elements in vector");
		if(_index >= _size)
			throw std::out_of_range("Error: Vector is full");
		this->_vector[_index] = number;
		_index++;
	}
	catch(std::out_of_range &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Span::addAllNumber(void)
{
	try
	{
		if(this->_size < 2)
			throw std::out_of_range("Error: Insufficient elements in vector");
		srand(static_cast<unsigned int>(time(0)));
		for (std::vector<int>::iterator it = this->_vector.begin(); it < this->_vector.end() - 1; it++) 
		{
			if(_index >= _size)
				throw std::out_of_range("Error: Vector is full");
			this->_vector[_index] = rand();
			_index++;
		}
	}
	catch(std::out_of_range &e)
	{
		std::cout << e.what() << std::endl;
	}
}

unsigned int Span::shortestSpan(void) const
{
	if(this->_size < 2)
		throw std::out_of_range("Error: Insufficient elements in vector");

	unsigned int		shortest = UINT_MAX;
	std::vector<int>	copy(this->_vector);

	std::sort(copy.begin(), copy.end());
	for (std::vector<int>::iterator it = copy.begin(); it < copy.end() - 1; it++) 
	{
		if ((unsigned)abs(*it - *(it + 1)) < shortest)
			shortest = abs(*it - *(it + 1));
	}

	return(shortest);
}

unsigned int Span::longestSpan() const 
{
	if(this->_size < 2)
		throw std::out_of_range("Error: Insufficient elements in vector");

	unsigned int		longest = UINT_MAX;
	std::vector<int>	copy(this->_vector);

	std::sort(copy.begin(), copy.end());
	longest = *(copy.end() - 1) - *(copy.begin());
	return (longest);
}
