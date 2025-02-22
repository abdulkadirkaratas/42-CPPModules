/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas@student.42istanbul.com.tr <aka    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:50:57 by akaratas@st       #+#    #+#             */
/*   Updated: 2025/02/18 20:33:15 by akaratas@st      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	int hitPoints;	  // sağlık puanı
	int energyPoints; // enerji puanı
	int attackDamage; // saldırı gücü

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	virtual ~ClapTrap();

	virtual void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif

/*
virtual Fonksiyonların Kullanım Alanları
Polymorphism (Çok biçimlilik) sağlamak için kullanılır.
Bir sınıfın alt sınıfları tarafından ezilmesi (override) gereken fonksiyonlar için idealdir.
virtual kullanırsanız, alt sınıflar bu fonksiyonu kendi ihtiyaçlarına göre yeniden tanımlayabilir.
virtual kullanmazsanız, alt sınıfta fonksiyonu yeniden tanımlasanız bile, üst sınıftaki fonksiyon çağrılır.
virtual destructor, silme işlemi sırasında tüm destructor’ların çağrılmasını sağlar.
*/
