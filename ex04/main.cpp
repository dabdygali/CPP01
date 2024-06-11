/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:20:00 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/11 13:23:05 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
#include <cstdlib>

int	main(int argc, char *argv[])
{
	std::string		infile;
	std::string		outfile;
	std::string		s1;
	std::string		s2;
	std::ifstream	ifs;
	std::ofstream	ofs;

	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return EXIT_FAILURE;
	}
	infile = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	
	ifs.open(infile.c_str());
	if (!ifs.good())
	{
		std::cerr << "Failed to open file \"" << infile << '"' << std::endl;
		return EXIT_FAILURE;
	}
	
	outfile = infile;
	outfile += ".replace";
	ofs.open(outfile.c_str());
	if(!ofs.good())
	{
		std::cerr << "Failed to create/open file \"" << outfile << '"' << std::endl;
		return EXIT_FAILURE;
	}
	
	return EXIT_SUCCESS;
}
