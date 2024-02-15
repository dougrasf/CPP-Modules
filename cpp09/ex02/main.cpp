/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:56:35 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/22 13:04:49 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void validArgs(int argc, char *argv[])
{
    if (argc <= 1)
		exit(1);
	if (!argv || *argv[1] == '\0')
		exit(1);
}

static void printTime(PmergeMe &obj)
{
    std::cout << "Time to process a range of " << obj.getSize() 
              <<  " elements with std::[vector] : " << obj.getVectorTime() << " us" << std::endl;

    std::cout << "Time to process a range of " << obj.getSize() 
              <<  " elements with std::[deque] : " << obj.getDequeTime() << " us" << std::endl;
}

static void getTime(PmergeMe &obj)
{
    struct timeval  startVector, endVector, startDeque, endDeque;
    long            seconds;

    gettimeofday(&startVector, NULL);
    obj.mergeSortVector();
    gettimeofday(&endVector, NULL);
    seconds = endVector.tv_sec - startVector.tv_sec;
    obj.setVectorTime(((seconds * 1000000) + endVector.tv_usec) - (startVector.tv_usec));
    
    gettimeofday(&startDeque, NULL);
    obj.mergeSortDeque();
    gettimeofday(&endDeque, NULL);
    seconds = endDeque.tv_sec - startDeque.tv_sec;
    obj.setDequeTime(((seconds * 1000000) + endDeque.tv_usec) - (startDeque.tv_usec));
}

static void run(char *argv[])
{
    try
    {
        PmergeMe obj(&argv[1]);

        std::cout << "Before: ";
        obj.printVector();
        // obj.printDeque();
        
        getTime(obj);
        
        std::cout << "After: ";
        obj.printVector();
        // obj.printDeque();
        
        printTime(obj);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

int main(int argc, char *argv[])
{
    validArgs(argc, argv);
    run(argv);
    return(0);    
}
