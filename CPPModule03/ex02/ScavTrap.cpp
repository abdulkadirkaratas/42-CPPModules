/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 01:37:36 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/18 23:43:10 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->name << " default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->name << " constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called!" << std::endl;
	*this = other; // Copy assignment operator'ı (operator=) çağırıyor.
}

/*
 : ClapTrap(other), sadece ClapTrap kısmını kopyalar.
Ama ScavTrap'in kendi özel değişkenleri varsa, onlar kopyalanmaz.
*this = other; diyerek hem ScavTrap hem de ClapTrap içindeki tüm verileri kopyalamış oluyoruz.

Eğer ClapTrap(other) çağrılmazsa, base class'ın default constructor'ı çağrılır.
Inheritance kullandığında, önce üst sınıf (ClapTrap) initialize edilmeli!
*/

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap " << this->name << " destructor called!" << std::endl; }

// Özel saldırı fonksiyonu (override)
void ScavTrap::attack(const std::string &target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		std::cout << "ScavTrap " << name << " viciously attacks " << target
				  << ", dealing " << attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << name << " has no energy or hit points left to attack!" << std::endl;
}

// Yeni metod: Guard Gate Mode
void ScavTrap::guardGate()
{
	if (hitPoints > 0)
		std::cout << "ScavTrap " << name << " is now in Gate Keeper Mode!" << std::endl;
	else
		std::cout << "ScavTrap " << name << " is already destroyed!" << std::endl;
}
