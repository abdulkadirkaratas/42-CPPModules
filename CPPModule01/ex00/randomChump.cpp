/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 03:24:19 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/07 03:24:19 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creates a zombie on the stack and announces it
void randomChump(const std::string &name)
{
	Zombie stackZombie(name);
	stackZombie.announce();
}
