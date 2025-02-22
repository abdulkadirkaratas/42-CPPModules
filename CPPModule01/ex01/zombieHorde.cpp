/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 04:06:31 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/07 04:06:31 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, const std::string name)
{
	// Tek bir dinamik bellek tahsisi ile tüm zombileri oluştur
	// Heap üzerinde N tane Zombie nesnesi için tek bir bellek bloğu tahsis edilir.
	// Derleyici her bir Zombie nesnesi için default constructor çağırır.
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].setName(name);

	return horde;
}
