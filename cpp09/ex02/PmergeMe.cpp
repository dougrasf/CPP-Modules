/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:07:46 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/12 20:10:55 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//------------ OCF
PmergeMe::PmergeMe(void) : _index(0), _size(0), _vectorTime(0), _dequeTime(0)
{
    std::cout << "Default constructor called!" << std::endl;
}

PmergeMe::PmergeMe(char *argv[]) : _index(0), _vectorTime(0), _dequeTime(0)
{
    addNumbers(argv);
	_size = (int)_vector.size();
}

PmergeMe::PmergeMe(const PmergeMe &old)
{
    std::cout << "Copy constructor called!" << std::endl;
    *this = old;
}

PmergeMe::~PmergeMe(void)
{
    // std::cout << "Default destructor called!" << std::endl;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &old)
{
    std::cout << "Copy assignment operator called!" << std::endl;
    if(this != &old)
    {
       this->_deque = old._deque;
       this->_vector = old._vector;
       this->_index = old._index;
       this->_size = old._size;
    }
    return(*this);
}
//------------

//------------ GETTERS AND SETTERS
void PmergeMe::setDequeTime(long time) { _dequeTime = time; }
void PmergeMe::setVectorTime(long time) { _vectorTime = time; }

long PmergeMe::getDequeTime(void) const { return(_dequeTime); }
long PmergeMe::getVectorTime(void) const { return(_vectorTime); }
int PmergeMe::getSize(void) const { return(_size); }
//------------

//------------ ADD NUMBERS
static void	validNumber(std::string number)
{
	for (int i = 0; number[i] != '\0'; i++)
	{
		if (!isdigit(number[i]))
			throw std::invalid_argument("Error");
	}
}

static double toInt(std::string number)
{
	double	result;

	validNumber(number);
	result = std::atol(number.c_str());
	if (result > INT_MAX || result < INT_MIN)
		throw std::overflow_error("Overflow in expression");
	return (result);
}

void PmergeMe::addNumbers(char *numbers[])
{
	int number;

	for (int i = 0; numbers[i]; i++)
	{
		number = toInt(numbers[i]);
		_vector.push_back(number);
		_deque.push_back(number);
	}
}
//------------

//------------ PRINT
void PmergeMe::printVector(void) const
{
	for (int i = 0; i < (int)_vector.size(); i++)
		std::cout << _vector[i] << " ";
	std::cout << std::endl;
}

void PmergeMe::printDeque(void) const
{
	for (int i = 0; i < (int)_deque.size(); i++)
		std::cout << _deque[i] << " ";
	std::cout << std::endl;
}
//------------

//------------ Merge Sort
template<typename T>
void splitAndFill(T& aux1, T& aux2, T vector)
{
	int	index = 0;

	while (index < (int)(vector.size() / 2))
	{
		aux1.push_back(vector[index]);
		index++;
	}
	while (index < (int)vector.size())
	{
		aux2.push_back(vector[index]);
		index++;
	}
}

template<typename T>
void PmergeMe::getBiggerNumbers(T& endArray, T array, int index)
{
	if (index >= (int)array.size())
		return ;
	for (int i = index; i < (int)array.size(); i++)
		endArray[_index++] = array[i];
}

template<typename T>
void PmergeMe::orderEndArray(T aux1, T aux2, T& endArray)
{
	int	index1 = 0;
	int index2 = 0;
	_index = 0;

	while (index1 < (int)aux1.size() && index2 < (int)aux2.size())
	{
		if (aux1[index1] < aux2[index2])
		{
			endArray[_index] = aux1[index1];
			index1++;
		}
		else
		{
			endArray[_index] = aux2[index2];
			index2++;
		}
		_index++;
	}
	getBiggerNumbers(endArray, aux1, index1);
	getBiggerNumbers(endArray, aux2, index2);
}

template<typename T>
void PmergeMe::sort(T& endArray)
{
	if (endArray.size() == 1)
		return ;
	T aux1;
	T aux2;

	splitAndFill(aux1, aux2, endArray);
	sort(aux1);
	sort(aux2);
	orderEndArray(aux1, aux2, endArray);
}

void PmergeMe::mergeSortVector(void)
{
    sort(_vector);
}

void PmergeMe::mergeSortDeque(void)
{
    sort(_deque);
}
//------------
