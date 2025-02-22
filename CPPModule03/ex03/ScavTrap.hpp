/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 01:37:34 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/19 00:25:03 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);
	~ScavTrap();

	// Overriding attack function
	void attack(const std::string &target);

	// New method specific to ScavTrap
	void guardGate();
};

#endif

/*
ScavTrap, ClapTrap'in tüm attribute'larını ve fonksiyonlarını miras alır.
ScavTrap, ClapTrap'in bir alt sınıfıdır (subclass, derived class).
ClapTrap ise ScavTrap'in üst sınıfıdır (base class).
ScavTrap, ClapTrap içindeki public ve protected üyeleri kullanabilir.
private üyeler miras alınmaz!
*/
