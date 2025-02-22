/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 03:35:58 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/20 23:21:55 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\n---- Correct Animal Tests ----" << std::endl;

	// Temel sınıf testleri
	const Animal *meta = new Animal();
	std::cout << "Animal Type: " << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << std::endl;

	// Dog sınıfı testleri
	const Animal *j = new Dog();
	std::cout << "Dog Type: " << j->getType() << std::endl;
	j->makeSound();
	std::cout << std::endl;

	// Cat sınıfı testleri
	const Animal *i = new Cat();
	std::cout << "Cat Type: " << i->getType() << std::endl;
	i->makeSound();
	std::cout << std::endl;

	// Bellek temizliği
	delete meta;
	delete j;
	delete i;

	std::cout << "\n---- Wrong Animal Tests ----" << std::endl;

	// Yanlış sınıf testleri
	const WrongAnimal *wrongMeta = new WrongAnimal();
	std::cout << "WrongAnimal Type: " << wrongMeta->getType() << std::endl;
	wrongMeta->makeSound();
	std::cout << std::endl;

	const WrongAnimal *wrongCat = new WrongCat();
	std::cout << "WrongCat Type (as WrongAnimal): " << wrongCat->getType() << std::endl;
	wrongCat->makeSound();
	std::cout << std::endl;

	const WrongCat *trueWrongCat = new WrongCat();
	std::cout << "True WrongCat Type: " << trueWrongCat->getType() << std::endl;
	trueWrongCat->makeSound();
	std::cout << std::endl;

	// Bellek temizliği
	delete wrongMeta;
	delete wrongCat;
	delete trueWrongCat;

	std::cout << "\n---- Stack Allocation Tests ----" << std::endl;

	// Stack üzerinde nesne oluşturma
	Animal a;
	Dog d;
	Cat c;
	WrongCat wc;

	std::cout << "\nAnimal Stack Type: " << a.getType() << std::endl;
	a.makeSound();

	std::cout << "\nDog Stack Type: " << d.getType() << std::endl;
	d.makeSound();

	std::cout << "\nCat Stack Type: " << c.getType() << std::endl;
	c.makeSound();

	std::cout << "\nWrongCat Stack Type: " << wc.getType() << std::endl;
	wc.makeSound();
	std::cout << std::endl;

	// Kural: Geçici nesneler (temporary objects), yalnızca const referanslara bağlanabilir!
	const Animal &poly = Dog();
	std::cout << "Animal Stack Type: " << poly.getType() << std::endl;
	poly.makeSound();
	std::cout << std::endl;

	const WrongAnimal &poly2 = WrongCat();
	std::cout << "WrongAnimal Stack Type: " << poly2.getType() << std::endl;
	poly2.makeSound();
	std::cout << std::endl;

	return 0;
}
