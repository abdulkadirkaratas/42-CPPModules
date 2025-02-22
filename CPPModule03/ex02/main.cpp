/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:50:53 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/18 23:53:00 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "==== ClapTrap Test ====" << std::endl;
	ClapTrap clap("Clappy");
	clap.attack("Target A");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << "\n==== ScavTrap Test ====" << std::endl;
	ScavTrap scav("Scavy");
	scav.attack("Target B");
	scav.takeDamage(20);
	scav.beRepaired(10);
	scav.guardGate();

	std::cout << "\n==== FragTrap Test ====" << std::endl;
	FragTrap frag("Fraggy");
	frag.attack("Target C");
	frag.takeDamage(30);
	frag.beRepaired(15);
	frag.highFivesGuys();

	std::cout << "\n==== Destruction Order ====" << std::endl;
	return 0;
}
