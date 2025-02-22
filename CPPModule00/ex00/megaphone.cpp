/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 04:10:45 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/05 04:10:45 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	for (int i = 1; i < argc; i++)
	{
		std::string str = argv[i];
		for (int j = 0; str[j]; j++)
			std::cout << static_cast<char>(std::toupper(str[j]));
	}
	std::cout << std::endl;
	return 0;
}
