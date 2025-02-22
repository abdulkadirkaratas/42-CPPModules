/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 01:15:01 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/08 01:15:01 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <search_string> <replace_string>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string searchStr = argv[2];
	std::string replaceStr = argv[3];

	FileReplacer replacer(filename, searchStr, replaceStr);
	replacer.processFile();

	return 0;
}
