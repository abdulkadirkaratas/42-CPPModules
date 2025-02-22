/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 00:40:19 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/17 20:45:22 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;   // a -> float
	std::cout << ++a << std::endl; // fixedPointValue 1 artıyor. yani artış 1/256 -> 0,00390625
	std::cout << a << std::endl;

	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}
