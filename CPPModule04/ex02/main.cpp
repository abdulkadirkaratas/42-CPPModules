/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 03:35:58 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/21 03:47:52 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void testAbstractClass()
{
	std::cout << "======== Abstract Class Test ========" << std::endl;
	// AAnimal *animal = new AAnimal(); // HATA: Abstract Class örneklendirilemez!
	AAnimal *dog = new Dog();
	AAnimal *cat = new Cat();

	std::cout << "\nDog Type: " << dog->getType() << std::endl;
	std::cout << "Cat Type: " << cat->getType() << std::endl;

	std::cout << std::endl;
	dog->makeSound();
	cat->makeSound();

	std::cout << std::endl;
	delete dog;
	delete cat;

	std::cout << "=========================================\n"
			  << std::endl;
}

void testPolymorphism()
{
	std::cout << "======== Polymorphism Test ========" << std::endl;

	AAnimal *animals[4];

	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();

	for (int i = 0; i < 4; i++)
	{
		std::cout << "\nAnimal Type: " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}

	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << "=========================================\n"
			  << std::endl;
}

int main()
{
	testAbstractClass();
	testPolymorphism();

	return 0;
}
