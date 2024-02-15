/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:00:10 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/11 17:57:37 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <deque>
#include <iostream>
#include <cstdlib>
#include <climits>
#include <sys/time.h>

class PmergeMe
{
    public:
        PmergeMe(void);
        PmergeMe(char *argv[]);
        PmergeMe(const PmergeMe &old);
        PmergeMe &operator=(const PmergeMe &old);
        ~PmergeMe(void);

        void    addNumbers(char *numbers[]);
        
        void    printVector(void) const;
        void    printDeque(void) const;
        
        void    mergeSortVector(void);
        void    mergeSortDeque(void);

        void    setDequeTime(long time);
        void    setVectorTime(long time);
        
        long    getDequeTime(void) const;
        long    getVectorTime(void) const;
        int     getSize(void) const;
        
        template<typename T>
        void    getBiggerNumbers(T& endArray, T array, int index);
        
        template<typename T>
        void    orderEndArray( T aux1, T aux2, T& endArray );

        template<typename T>
        void    sort( T& endArray);

    private:
        std::vector<int>    _vector;
        std::deque<int>    _deque;
        int                _index;
        int                _size;
        long               _vectorTime;
        long               _dequeTime;
};
