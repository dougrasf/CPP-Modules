/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewFile.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:16:39 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/02 18:44:26 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NewFile.hpp"

void NewFile::getContent(void)
{
    std::string line;

    inputFile.open(filename.c_str());
    filename.append(".replace");
    outputFile.open(filename.c_str());

    if(inputFile.is_open())
        if(outputFile.is_open())
            while(getline(inputFile, line))
                verifyAndReplace(line);

    outputFile.close();
    inputFile.close();
}

void NewFile::verifyAndReplace(std::string line)
{
    std::size_t index = -1;

    while((index = line.find(s1)) != std::string::npos)
    {
        line.erase(index, s1.length());
        line.insert(index, s2);
    }
    outputFile << line << std::endl;
}
