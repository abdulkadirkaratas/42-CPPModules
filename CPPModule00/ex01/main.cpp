/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 02:03:35 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/06 02:03:35 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (true)
	{
		std::cout << "\nEnter a command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command)) // EOF veya hata olursa
		{
			std::cout << "\nInput stream closed. Exiting..." << std::endl;
			break;
		}

		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContacts();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command." << std::endl;
	}

	return 0;
}
