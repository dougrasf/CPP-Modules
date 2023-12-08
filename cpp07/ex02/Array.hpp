/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:00:06 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/28 20:38:32 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>

template <typename T>
class Array 
{
    private:
        T *content;
        unsigned int length;

    public:
		Array() : content(new T[0]), length(0) {};

		Array(unsigned int n) : content(new T[n]), length(n) 
		{
			std::fill_n(content, n, 0);
		};
			
		Array(const Array &other) 
		{
			*this = other;
		}

		Array& operator=(const Array &other) 
		{
			if (this != &other) 
			{
				this->length = other.length;
				this->content = new T[length];
				std::copy(other.content, other.content + length, this->content);
			}

			return (*this);
		}

		~Array() 
		{ 
			delete[] content; 
		};

		unsigned int size(void) const
		{
			return this->length;
		}
			
		T& operator[](unsigned int index) const
		{
			if (index >= length)
				throw std::out_of_range("Index out of range");
			return this->content[index];
		};
};
