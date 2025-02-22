/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 01:55:13 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/16 03:07:58 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int fixedPointValue;
	static const int fractionalBits = 8; // Ondalık kısım için bit sayısı

public:
	Fixed();							  // Default Constructor
	Fixed(const Fixed &other);			  // Copy Constructor
	Fixed &operator=(const Fixed &other); // Copy Assignment Operator, Overloading
	~Fixed();							  // Destructor

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
