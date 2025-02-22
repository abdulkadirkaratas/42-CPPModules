/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 03:16:10 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/16 20:33:19 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int fixedPointValue;
	static const int fractionalBits = 8;

public:
	Fixed();							  // Default Constructor
	Fixed(const int value);				  // Integer Constructor
	Fixed(const float value);			  // Float Constructor
	Fixed(const Fixed &other);			  // Copy Constructor
	Fixed &operator=(const Fixed &other); // Copy Assignment Operator, Overloading
	~Fixed();							  // Destructor

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

// Operator Overloading for std::ostream
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
