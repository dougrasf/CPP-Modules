/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:15:21 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/18 22:18:52 by dofranci         ###   ########.fr       */
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
      
      int   toInt(void) const;
      float toFloat(void) const;
      
      Fixed &operator=(const Fixed &old);
      
      bool operator<(const Fixed &old);
      bool operator>(const Fixed &old);
      bool operator>=(const Fixed &old);
      bool operator<=(const Fixed &old);
      bool operator==(const Fixed &old);
      bool operator!=(const Fixed &old);

	  Fixed operator+(const Fixed &old);
	  Fixed operator-(const Fixed &old);
	  Fixed operator*(const Fixed &old);
	  Fixed operator/(const Fixed &old);

	  Fixed operator++(int);
	  Fixed operator--(int);
      Fixed operator++(void);
      Fixed operator--(void);

};

std::ostream&	operator<<(std::ostream& old, const Fixed& obj);

#endif
