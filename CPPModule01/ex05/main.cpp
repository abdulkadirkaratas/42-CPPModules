/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 01:47:50 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/09 01:47:50 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("UNKNOWN"); // Test for invalid level

	return 0;
}

/*
Bu çözüm, complain(const std::string &level) kullanımı ve class member function pointer kullanımı ile
if/else yapısı kullanılmadan complain() işlevselliğini sağlamak üzere tasarlanmıştır.
*/
