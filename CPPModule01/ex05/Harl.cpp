/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 01:47:56 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/09 01:47:56 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				 "I really do!"
			  << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
				 "You didn't put enough bacon in my burger! "
				 "If you did, I wouldn't be asking for more!"
			  << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
				 "I've been coming for years whereas you started working here "
				 "since last month."
			  << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

void Harl::complain(const std::string &level)
{
	typedef void (Harl::*HarlFunc)(void);

	const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlFunc functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "Invalid complaint level: " << level << std::endl;
}

/*

typedef int (*FuncPtr)(int, int);
Bu örnekte FuncPtr, iki int parametresi alıp int döndüren bir fonksiyon işaretçisini ifade eder.

class MyClass {
public:
	void display(int value) {
		std::cout << "Value: " << value << std::endl;
	}
};

int main() {
	void (MyClass::*funcPtr)(int) = &MyClass::display;

	MyClass obj;
	(obj.*funcPtr)(42);

	return 0;
}

----------------------------------------------------------

class MyClass {
public:
	void display(int value) {
		std::cout << "Value: " << value << std::endl;
	}
};

// Typedef ile üye fonksiyon pointer tanımı
typedef void (MyClass::*DisplayFunc)(int);

int main() {
	DisplayFunc funcPtr = &MyClass::display;  // Daha temiz kullanım

	MyClass obj;
	(obj.*funcPtr)(42);

	return 0;
}

*/
