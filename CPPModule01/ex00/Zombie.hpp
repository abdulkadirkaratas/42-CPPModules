/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 03:24:10 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/07 03:24:10 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	Zombie(const std::string &name);
	~Zombie();

	void announce() const;
	void setName(const std::string &name);
};

Zombie *newZombie(const std::string &name);
void randomChump(const std::string &name);

#endif
