/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:50:59 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/18 21:17:26 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : name(_name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap copy constructor called!" << std::endl;
	*this = other; // Atama operatörünü çağırıyoruz
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() { std::cout << "ClapTrap " << name << " destructor called!" << std::endl; }

// Saldırı fonksiyonu
void ClapTrap::attack(const std::string &target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target
				  << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " has no energy or hit points left to attack!" << std::endl;
}

// Hasar alma fonksiyonu
void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0)
	{
		hitPoints = hitPoints - amount;
		if (hitPoints < 0)
			hitPoints = 0;
		std::cout << "ClapTrap " << name << " takes " << amount
				  << " damage! Remaining HP: " << hitPoints << ", Energy: " << energyPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " is already destroyed!" << std::endl;
}

// Onarım fonksiyonu
void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		hitPoints = hitPoints + amount;
		energyPoints--;
		std::cout << "ClapTrap " << name << " repairs itself for " << amount
				  << " hit points! Remaining HP: " << hitPoints << ", Energy: " << energyPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " has no energy or is already destroyed!" << std::endl;
}
