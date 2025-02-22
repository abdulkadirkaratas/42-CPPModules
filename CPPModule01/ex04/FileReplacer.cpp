/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 03:25:21 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/08 03:25:21 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

FileReplacer::FileReplacer(const std::string &file, const std::string &s1, const std::string &s2)
	: filename(file), searchStr(s1), replaceStr(s2) {}

void FileReplacer::processFile()
{
	if (searchStr.empty())
	{
		std::cerr << "Error: Search string cannot be empty." << std::endl;
		return;
	}

	std::ifstream infile(filename.c_str()); // dosyayı okuma modunda açar.
	if (!infile)
	{
		std::cerr << "Error: Unable to open input file '" << filename << "'." << std::endl;
		return;
	}

	std::ofstream outfile((filename + ".replace").c_str()); // dosyayı yazma modunda açar.
	if (!outfile)
	{
		std::cerr << "Error: Unable to create output file '" << filename + ".replace" << "'." << std::endl;
		return;
	}

	bool firstLine = true;

	std::string line;
	while (std::getline(infile, line))
	{
		if (!firstLine)
		outfile << '\n'; // İlk satırdan sonra her satıra newline ekle

		size_t pos = 0; // find(), aranan öğe yoksa npos döndürür. npos en büyük size_t değeridir.
		while ((pos = line.find(searchStr, pos)) != std::string::npos)
		{
			line.erase(pos, searchStr.length());
			line.insert(pos, replaceStr);
			pos += replaceStr.length();
		}

		outfile << line;
		firstLine = false;
	}

	infile.close();
	outfile.close();
	std::cout << "Replacement complete. Check the file '" << filename << ".replace'." << std::endl;
}
