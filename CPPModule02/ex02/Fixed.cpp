/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 00:40:25 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/17 20:40:56 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Fixed.hpp"
#include <cmath> // roundf için

Fixed::Fixed() : fixedPointValue(0) { /*std::cout << "Default constructor called" << std::endl;*/ }

Fixed::Fixed(const int value)
{
	/*std::cout << "Int constructor called" << std::endl;*/
	this->fixedPointValue = (value << fractionalBits);
}

Fixed::Fixed(const float value)
{
	/*std::cout << "Float constructor called" << std::endl;*/
	this->fixedPointValue = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	/*std::cout << "Copy constructor called" << std::endl;*/
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	/*std::cout << "Copy assignment operator called" << std::endl;*/
	if (this != &other)
		this->setRawBits(other.getRawBits());

	return (*this);
}

Fixed::~Fixed() { /*std::cout << "Destructor called" << std::endl;*/ }

int Fixed::getRawBits(void) const { return (this->fixedPointValue); }
void Fixed::setRawBits(int const raw) { this->fixedPointValue = raw; }

float Fixed::toFloat(void) const { return (((float)this->fixedPointValue) / (1 << fractionalBits)); }
int Fixed::toInt(void) const { return ((this->fixedPointValue) >> fractionalBits); }

// Comparison Operators
bool Fixed::operator>(const Fixed &other) const { return (this->fixedPointValue > other.fixedPointValue); }
bool Fixed::operator<(const Fixed &other) const { return (this->fixedPointValue < other.fixedPointValue); }
bool Fixed::operator>=(const Fixed &other) const { return (this->fixedPointValue >= other.fixedPointValue); }
bool Fixed::operator<=(const Fixed &other) const { return (this->fixedPointValue <= other.fixedPointValue); }
bool Fixed::operator==(const Fixed &other) const { return (this->fixedPointValue == other.fixedPointValue); }
bool Fixed::operator!=(const Fixed &other) const { return (this->fixedPointValue != other.fixedPointValue); }

// Arithmetic Operators
Fixed Fixed::operator+(const Fixed &other) const { return (Fixed(this->toFloat() + other.toFloat())); }
Fixed Fixed::operator-(const Fixed &other) const { return (Fixed(this->toFloat() - other.toFloat())); }
Fixed Fixed::operator*(const Fixed &other) const { return (Fixed(this->toFloat() * other.toFloat())); }
Fixed Fixed::operator/(const Fixed &other) const { return (Fixed(this->toFloat() / other.toFloat())); }

// Increment and Decrement Operators
Fixed &Fixed::operator++() // Pre-increment (++x)
{
	++(this->fixedPointValue);
	return (*this);
}

Fixed Fixed::operator++(int) // Post-increment (x++) // int, ayrım yapmak içindir, kullanılmaz.
{
	Fixed temp = *this;
	++(*this);
	return (temp);
}

Fixed &Fixed::operator--() // Pre-decrement
{
	--(this->fixedPointValue);
	return (*this);
}

Fixed Fixed::operator--(int) // Post-decrement
{
	Fixed temp = *this;
	--(*this);
	return (temp);
}

// Min & Max Functions
Fixed &Fixed::min(Fixed &a, Fixed &b) { return ((a < b) ? a : b); }
Fixed &Fixed::max(Fixed &a, Fixed &b) { return ((a > b) ? a : b); }
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) { return ((a < b) ? a : b); }
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) { return ((a > b) ? a : b); }

// Operator Overloading for std::ostream
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
