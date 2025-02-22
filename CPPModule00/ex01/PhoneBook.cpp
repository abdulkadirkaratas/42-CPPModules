/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 02:02:27 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/06 02:02:27 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentIndex(0), totalContacts(0) {}
PhoneBook::~PhoneBook() {}

void PhoneBook::addContact()
{
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

	std::cout << "\nEnter first name: ";
	std::getline(std::cin, firstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, lastName);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkestSecret);

	if (firstName.empty() || lastName.empty() || nickname.empty() ||
		phoneNumber.empty() || darkestSecret.empty())
	{
		std::cout << "\nAll fields must be filled!" << std::endl;
		return;
	}

	contacts[currentIndex].setContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	currentIndex = (currentIndex + 1) % 8;
	if (totalContacts < 8)
		totalContacts++;
}

std::string PhoneBook::formatField(const std::string &str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::searchContacts() const
{
	if (totalContacts == 0)
	{
		std::cout << "\nPhonebook is empty." << std::endl;
		return;
	}

	std::cout << std::endl;
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;

	for (int i = 0; i < totalContacts; i++)
	{
		std::cout << std::setw(10) << i << "|"
				  << std::setw(10) << formatField(contacts[i].getField("firstName")) << "|"
				  << std::setw(10) << formatField(contacts[i].getField("lastName")) << "|"
				  << std::setw(10) << formatField(contacts[i].getField("nickname")) << std::endl;
	}

	std::cout << "\nEnter the index of the contact to display: ";
	std::string index_as_string;
	std::getline(std::cin, index_as_string);

	std::stringstream convert(index_as_string);
	int index;
	convert >> index;

	if (convert.fail() || index < 0 || index >= totalContacts)
	{
		std::cout << "\nInvalid index!" << std::endl;
		return;
	}

	std::cout << "\nFirst Name: " << contacts[index].getField("firstName") << std::endl;
	std::cout << "Last Name: " << contacts[index].getField("lastName") << std::endl;
	std::cout << "Nickname: " << contacts[index].getField("nickname") << std::endl;
	std::cout << "Phone Number: " << contacts[index].getField("phoneNumber") << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].getField("darkestSecret") << std::endl;
}
