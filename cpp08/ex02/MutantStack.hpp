/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:12:53 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/08 15:34:11 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> 
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack(void) : std::stack<T>() {}
		~MutantStack(void) {}

		iterator begin(void) { return (this->c.begin()); }
		iterator end(void) { return (this->c.end()); }
};
