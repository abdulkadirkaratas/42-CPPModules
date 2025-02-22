/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:35:51 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/07 05:35:51 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";

	std::string *stringPTR = &brain; // Pointer ile adres tut
	std::string &stringREF = brain;	 // Referans ile adresi bağla

	// Bellek adreslerinin yazdırılması
	std::cout << "Memory address of brain variable: " << &brain << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;

	// Değerlerin yazdırılması
	std::cout << "\nValue of brain variable: " << brain << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;

	return 0;
}
