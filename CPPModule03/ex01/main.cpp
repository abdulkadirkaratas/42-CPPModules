/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:50:53 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/19 02:12:15 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap a("RobotA");
	ScavTrap b("ScavengerB");

	std::cout << std::endl;

	a.attack("Enemy1");
	a.takeDamage(5);
	a.beRepaired(2);

	std::cout << std::endl;

	b.attack("Enemy2"); // Overriding attack function
	b.guardGate();
	b.takeDamage(3);
	b.beRepaired(1);

	std::cout << std::endl;

	ClapTrap *c = new ScavTrap("DynamicScav");
	c->attack("DynamicEnemy"); // Virtual function test
	delete c;

	return 0;
}
