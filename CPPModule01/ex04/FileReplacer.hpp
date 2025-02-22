/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 03:25:19 by akaratas          #+#    #+#             */
/*   Updated: 2025/02/08 03:25:19 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <iostream>
#include <fstream>
#include <string>

class FileReplacer
{
private:
	std::string filename;
	std::string searchStr;
	std::string replaceStr;

public:
	FileReplacer(const std::string &file, const std::string &s1, const std::string &s2);
	void processFile();
};

#endif
