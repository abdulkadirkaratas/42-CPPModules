/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:06:08 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/07 19:06:08 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();

		club.setType("some other type of club");
		bob.attack();
	}

	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();

		club.setType("some other type of club");
		jim.attack();
	}

	return 0;
}

/*
Pointer mı Referans mı Kullanmalı?

Referans (&) Kullanımı: Eğer nesnenin her zaman var olması garanti ise referans daha güvenlidir ve okunması daha kolaydır (HumanA).

Pointer (*) Kullanımı: Eğer nesne başlangıçta olmayabilir veya sonradan atanabilir ise pointer kullanımı daha uygundur (HumanB).

Bu yapıda HumanA'nın referans kullanması daha uygunken, HumanB'nin pointer ile esneklik sağlaması gerekmiştir.
*/
