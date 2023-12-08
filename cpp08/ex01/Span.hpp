/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:56:22 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/08 09:56:27 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

class Span
{
	private:
		unsigned int _size;
		unsigned int _index;
		std::vector<int> _vector;

	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span &old);
		~Span(void);
		Span &operator=(const Span &old);
		unsigned int operator[](const unsigned int index) const;

		unsigned int getSize(void) const;
		void addNumber(int n);
		void addAllNumber(void);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;

};