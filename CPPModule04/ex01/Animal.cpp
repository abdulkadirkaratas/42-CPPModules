/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 03:41:56 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/19 03:43:25 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal default constructor called!" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called!" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy assignment operator called!" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Some generic animal sound..." << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
