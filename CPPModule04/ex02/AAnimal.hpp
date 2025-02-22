/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 03:41:44 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/21 03:56:44 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
protected:
	std::string type;

public:
	AAnimal();
	AAnimal(const AAnimal &other);
	AAnimal &operator=(const AAnimal &other);
	virtual ~AAnimal();

	virtual void makeSound() const = 0; // Pure virtual function -> Abstract class
	std::string getType() const;
};

#endif

/*
Bir pure virtual function (= 0 ile tanımlanır), temel sınıfta (base class) sadece bir
şablon gibi bulunur ama kesinlikle uygulanmaz.
Yani Base sınıfının nesnesi oluşturulamaz ve Derived sınıfı bu fonksiyonu implement etmek zorundadır.
Bu sayede Base artık soyut sınıf (abstract class) oldu.
Soyut sınıflar sadece türetilmiş sınıflar (derived classes) tarafından miras alınabilir ve kullanılabilir.

Sanal fonksiyonlar (virtual) türetilmiş sınıflarda override edilebilir, ama zorunlu değildir.
Saf sanal fonksiyonlar (= 0) türetilmiş sınıflarda override edilmek zorundadır.
En az bir tane saf sanal fonksiyon içeren sınıflar "soyut sınıf (abstract class)" olur.
Soyut sınıfların nesnesi oluşturulamaz!
Soyut sınıflar sadece türetilmiş sınıflar tarafından kullanılabilir.
*/
