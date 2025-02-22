/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 03:35:58 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/21 03:02:43 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal *j = new Dog();
	std::cout << std::endl;
	const Animal *i = new Cat();
	std::cout << std::endl;

	delete j; // Doğru destructor çağrılmalı
	std::cout << std::endl;
	delete i;

	std::cout << "\n========= Deep Copy Test =========\n"
			  << std::endl;

	// Derin kopyalama testi
	Dog dog1;
	dog1.setIdea(0, "I want a bone!");
	dog1.setIdea(1, "I want to go for a walk!");
	std::cout << std::endl;

	Dog dog2 = dog1; // Kopya oluşturma (copy constructor)
	std::cout << std::endl;

	std::cout << "Dog1's idea: " << dog1.getIdea(0) << std::endl;
	std::cout << "Dog2's idea: " << dog2.getIdea(0) << std::endl;

	// Dog2'nin fikrini değiştiriyoruz ve Dog1 etkileniyor mu diye bakıyoruz
	dog2.setIdea(0, "I want to sleep...");

	std::cout << "\nAfter modifying Dog2's idea..." << std::endl;
	std::cout << "Dog1's first idea: " << dog1.getIdea(0) << std::endl; // Orijinali değişmemeli!
	std::cout << "Dog2's first idea: " << dog2.getIdea(0) << std::endl;

	std::cout << "\n============ Animal Array Test ================\n"
			  << std::endl;

	// Dizi testleri
	Animal *animals[8];

	for (int i = 0; i < 4; i++)
	{
		animals[i] = new Dog();
		std::cout << std::endl;
	}
	for (int i = 4; i < 8; i++)
	{
		animals[i] = new Cat();
		std::cout << std::endl;
	}

	for (int i = 0; i < 8; i++)
		animals[i]->makeSound();

	std::cout << std::endl;

	// Bellek temizliği
	for (int i = 0; i < 8; i++)
		delete animals[i];

	return 0;
}
