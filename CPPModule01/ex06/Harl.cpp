/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 04:38:35 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/09 04:38:35 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n"
				 "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				 "I really do!\n"
			  << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]\n"
				 "I cannot believe adding extra bacon costs more money. "
				 "You didn't put enough bacon in my burger! "
				 "If you did, I wouldn't be asking for more!\n"
			  << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\n"
				 "I think I deserve to have some extra bacon for free. "
				 "I've been coming for years whereas you started working here "
				 "since last month.\n"
			  << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]\n"
				 "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

void Harl::complain(const std::string &level)
{
	int index = -1;
	const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			index = i;
			break;
		}
	}

	switch (index)
	{
	case 0:
		this->debug();
		// fall-through
	case 1:
		this->info();
		// fall-through
	case 2:
		this->warning();
		// fall-through
	case 3:
		this->error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
