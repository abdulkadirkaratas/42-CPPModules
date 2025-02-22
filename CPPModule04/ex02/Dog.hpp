/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 03:43:47 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/21 03:27:48 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain *brain;

public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog();

	void makeSound() const; // makeSound() metodunu override etmek zorundayız, yoksa hata alırız.
	void setIdea(int index, const std::string &idea);
	std::string getIdea(int index) const;
};

#endif
