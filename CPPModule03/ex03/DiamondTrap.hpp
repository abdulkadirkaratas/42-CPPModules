/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 00:15:01 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/19 02:26:18 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// Eğer ScavTrap en son başlatılırsa, onun değeri kullanılır. O yüzden başlatma sırasına dikkat etmelisin!
class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string name; // ClapTrap::name ile aynı isme sahip olmalı

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap &operator=(const DiamondTrap &other);
	~DiamondTrap();

	void attack(const std::string &target);
	void whoAmI();
};

#endif

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
