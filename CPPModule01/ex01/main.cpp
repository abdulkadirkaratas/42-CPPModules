/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 04:06:24 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/07 04:06:24 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

int main()
{
	std::cout << "Enter the number of zombies in the horde: ";
	std::string N_as_string;
	std::getline(std::cin, N_as_string);

	std::stringstream convert(N_as_string);
	int N;
	convert >> N;

	if (convert.fail() || N <= 0)
	{
		std::cout << "\nInvalid N!" << std::endl;
		return (1);
	}

	Zombie *horde = zombieHorde(N, "abdul");

	if (horde != NULL)
	{
		for (int i = 0; i < N; i++)
			horde[i].announce();
	}

	// Bellek temizliği
	delete[] horde;

	return (0);
}
