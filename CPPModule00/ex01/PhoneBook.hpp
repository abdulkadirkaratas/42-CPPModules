/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 04:49:27 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/06 04:49:27 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

class PhoneBook
{
private:
	Contact contacts[8];
	int currentIndex;
	int totalContacts;

	std::string formatField(const std::string &str) const;

public:
	PhoneBook();
	~PhoneBook();

	void addContact();
	void searchContacts() const;
};

#endif
