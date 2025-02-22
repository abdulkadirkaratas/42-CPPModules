/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 00:15:03 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/19 02:24:00 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), name("Default")
{
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << this->name << " default constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name"), name(_name)
{
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << this->name << " constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	std::cout << "DiamondTrap copy constructor called!" << std::endl;
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() { std::cout << "DiamondTrap " << name << " destructor called!" << std::endl; }

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap Name: " << name << ", ClapTrap Name: " << ClapTrap::name << std::endl;
}

/*
	DiamondTrap'in Soy Ağacı

		   ClapTrap
		 /         \
	ScavTrap      FragTrap
		 \         /
		 DiamondTrap

Bu yapı nedeniyle, hitPoints değişkeni iki kez geliyor:
ScavTrap içinde bir hitPoints
FragTrap içinde bir hitPoints
Bunlardan hangisini kullanacağımızı açıkça belirtmezsek, C++ derleyicisi hata verir.

virtual inheritance sayesinde ClapTrap sınıfı yalnızca bir kez oluşturulur ve belirsizlik ortadan kalkar.
Sanal (virtual) miras kullanılırsa, temel sınıfın yalnızca tek bir kopyası tutulur ve belirsizlik ortadan kalkar.
*/
