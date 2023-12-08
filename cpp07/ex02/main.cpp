/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:01:45 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/28 20:39:50 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() 
{
	Array<int> empty_array;
	Array<int> int_array(5);
	Array<double> double_array(5);
	Array<float> float_array(5);
	Array<std::string> string_array(5);

	std::cout << "Empty array:" << std::endl;
	std::cout << "Size: " << empty_array.size() << std::endl;

	std::cout << std::endl;

	std::cout << "Int array:" << std::endl;
	for (unsigned int i = 0; i < int_array.size(); i++)
		int_array[i] = i;
	for (unsigned int i = 0; i < int_array.size(); i++)
		std::cout << int_array[i] << std::endl ;
	std::cout << "Size: " << int_array.size() << std::endl;

	std::cout << std::endl;

	std::cout << "Double array:" << std::endl;
	for (unsigned int i = 0; i < double_array.size(); i++)
		double_array[i] = i + 0.1;
	for (unsigned int i = 0; i < double_array.size(); i++)
		std::cout << double_array[i] << std::endl;

	std::cout << std::endl;
	
	std::cout << "Float array:" << std::endl;
	for (unsigned int i = 0; i < float_array.size(); i++)
		float_array[i] = i + 0.5;
	for (unsigned int i = 0; i < float_array.size(); i++)
		std::cout << float_array[i] << std::endl;

	std::cout << std::endl;

	std::cout << "String array:" << std::endl;
	std::stringstream ss;
	for (unsigned int i = 0; i < string_array.size(); i++)
	{	
		ss << "string" << i + 1;
		string_array[i] = ss.str();
		ss.str("");
	}
	for (unsigned int i = 0; i < string_array.size(); i++)
		std::cout << string_array[i] << std::endl;

	std::cout << std::endl;
	
	std::cout << "Copy constructor:" << std::endl;
	Array<int> int_array_copy(int_array);
	for (unsigned int i = 0; i < int_array_copy.size(); i++)
		std::cout << int_array_copy[i] << std::endl;

	std::cout << std::endl;
	
	std::cout << "Not out of limits:" << std::endl;
	try
	{
		std::cout << int_array[0] << std::endl;
		std::cout << int_array[1] << std::endl;
		std::cout << int_array[2] << std::endl;
		std::cout << int_array[3] << std::endl;
		std::cout << int_array[4] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Out of limits (-): " << std::endl;
	try
	{
		int_array[-1] = 42;
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Out of limits (+):" << std::endl;
	try
	{
		int_array[5] = 42;
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}