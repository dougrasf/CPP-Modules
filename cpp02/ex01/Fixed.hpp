/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:15:21 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/16 17:08:54 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
  private:
      static const int  _fractional; 
      int               _fixed;

  public:
      Fixed(void);
      Fixed(const int value);
      Fixed(const float value);
      Fixed(const Fixed &old);
      ~Fixed(void);
      int   getRawBits(void) const;
      void  setRawBits(int const raw); 
      Fixed &operator=(const Fixed &old);
      int   toInt(void) const;
      float toFloat(void) const;
};

std::ostream&	operator<<(std::ostream& old, const Fixed& obj);

#endif