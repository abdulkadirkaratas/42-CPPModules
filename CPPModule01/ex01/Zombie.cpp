/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 04:06:29 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/07 04:06:29 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Unnamed Zombie") {}
Zombie::Zombie(const std::string &name) : _name(name) {}

Zombie::~Zombie()
{
	std::cout << _name << " is destroyed." << std::endl;
}

void Zombie::setName(const std::string &name)
{
	_name = name;
}

void Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
