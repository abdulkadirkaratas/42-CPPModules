/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 02:02:31 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/06 02:02:31 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void Contact::setContact(const std::string &first, const std::string &last,
						 const std::string &nick, const std::string &phone, const std::string &secret)
{
	firstName = first;
	lastName = last;
	nickname = nick;
	phoneNumber = phone;
	darkestSecret = secret;
}

std::string Contact::getField(const std::string &field) const
{
	if (field == "firstName")
		return firstName;
	if (field == "lastName")
		return lastName;
	if (field == "nickname")
		return nickname;
	if (field == "phoneNumber")
		return phoneNumber;
	if (field == "darkestSecret")
		return darkestSecret;
	return "";
}
