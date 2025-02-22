/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 03:45:29 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/20 23:52:19 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;

public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();

	void makeSound() const;
	void setIdea(int index, const std::string &idea);
	std::string getIdea(int index) const;
};

#endif
