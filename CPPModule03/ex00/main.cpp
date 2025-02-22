/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:50:53 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/18 01:28:58 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("RobotA");
	ClapTrap b("RobotB");

	a.attack("RobotB");
	b.takeDamage(5);
	b.beRepaired(3);

	ClapTrap c = a; // Copy constructor çağrılacak
	c.attack("Dummy");

	ClapTrap d;
	d = b; // Copy assignment operator çağrılacak
	d.attack("Dummy");

	return 0;
}

/*

ClapTrap(std::string name) → Adı verilen bir ClapTrap nesnesi oluşturur.

attack() → 1 enerji harcayarak saldırır.
takeDamage() → Belirtilen miktarda hasar alır.
beRepaired() → 1 enerji harcayarak belirli miktarda HP kazanır.

Enerji veya HP bitince işlem yapılamaz.

*/
