/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 03:41:44 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/20 22:53:26 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType() const;
};

#endif

/*
Base Class'ta Destructor'a Neden virtual Yazıyoruz?
Eğer bir sınıf polimorfik olarak kullanılıyorsa (yani bir base class pointer'ı veya referansı üzerinden
inherited class'ın nesnesine erişiliyorsa), destructor mutlaka virtual olmalıdır.
Aksi takdirde inherited class'ın destructor'ı çağrılmaz ve memory leak oluşabilir.

virtual Destructor Olmazsa Ne Olur?
Eğer base class'taki destructor virtual değilse, delete işlemi sadece base class'ın destructor'ını çağırır.
Inherited class'ın destructor'ı çağrılmadığı için o sınıfta heap üzerinde tahsis edilmiş bellek serbest bırakılmaz.
*/
