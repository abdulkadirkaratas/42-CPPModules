/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 03:45:37 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/21 03:29:21 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
	this->type = "Cat";
	std::cout << "Cat constructor called!" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other), brain(new Brain(*(other.brain)))
{
	std::cout << "Cat copy constructor called!" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		AAnimal::operator=(other);
		*brain = *(other.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called!" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}

void Cat::setIdea(int index, const std::string &idea)
{
	brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
	return (brain->getIdea(index));
}
