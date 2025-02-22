/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 03:16:15 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/17 00:32:40 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;			   // Default Constructor
	Fixed const b(10);	   // Integer Constructor
	Fixed const c(42.42f); // Float Constructor
	Fixed const d(b);	   // Copy Constructor

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl; // a.toFloat();
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}
