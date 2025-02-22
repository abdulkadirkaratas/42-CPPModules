/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 03:41:56 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/21 03:25:52 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Animal")
{
	std::cout << "AAnimal default constructor called!" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "AAnimal copy constructor called!" << std::endl;
	*this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	std::cout << "AAnimal copy assignment operator called!" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called!" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}
