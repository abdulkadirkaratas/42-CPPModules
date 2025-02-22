/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 00:40:23 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/17 04:32:33 by akaratas@st      ###   ########.fr       */
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
	Fixed &operator=(const Fixed &other); // Copy Assignment Operator
	~Fixed();							  // Destructor

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	// Comparison Operators
	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;

	// Arithmetic Operators
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;

	// Increment and Decrement Operators
	Fixed &operator++();   // Pre-increment
	Fixed operator++(int); // Post-increment
	Fixed &operator--();   // Pre-decrement
	Fixed operator--(int); // Post-decrement

	// Min & Max Functions
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};

// Operator Overloading for std::ostream
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
