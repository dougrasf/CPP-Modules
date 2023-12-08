/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:48:57 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/16 22:17:54 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void) 
{
    Data *_data = new(Data);
    Data *_deserializer_data;
    uintptr_t _serializer;    

    _data->_type = "suco";
    _data->_value = "maca";
    _data->_amount = 3;
    std::cout << "Data \n" << *_data << std::endl;

    _serializer = Serializer::serializer(_data);
    std::cout << "Serialized uintptr_t = " << _serializer << std::endl;
    std::cout << std::endl;

    _deserializer_data = Serializer::deserializer(_serializer);
    std::cout << "Deserialized data\n" << *_deserializer_data << std::endl;  
    std::cout << std::endl;

    delete _data;
    return 0;
}
