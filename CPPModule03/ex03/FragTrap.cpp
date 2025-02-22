/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 23:15:25 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/18 23:44:08 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " default constructor called!" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called!" << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " destructor called!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (hitPoints > 0)
		std::cout << "FragTrap " << name << " says: \"Hey guys! High five!\"" << std::endl;
	else
		std::cout << "FragTrap " << name << " is already destroyed!" << std::endl;
}
