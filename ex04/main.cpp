/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:20:00 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/12 17:14:44 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <new>
#include <sys/stat.h>

int	check_arguments(int const& argc, char const	*file)
{
	struct stat	file_info;

	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return -1;
	}
	if (stat(file, &file_info) < 0)
	{
		std::cerr << "Error accessing the file \"" << file << '\"' << std::endl;
		return -1;
	}
	if (file_info.st_mode & S_IFDIR)
	{
		std::cerr << "Error: \"" << file << "\" is a directory" << std::endl;
		return -1;
	}
	return 0;
}

int	open_file(std::string const& infile, std::ifstream& ifs)
{
	ifs.open(infile.c_str());
	if (!ifs.good())
	{
		std::cerr << "Failed to open file \"" << infile << '"' << std::endl;
		return -1;
	}
	return 0;
}

int	open_file(std::string const& outfile, std::ofstream& ofs)
{
	ofs.open(outfile.c_str());
	if(!ofs.good())
	{
		std::cerr << "Failed to create/open file \"" << outfile << '"' << std::endl;
		return -1;
	}
	return 0;
}

int	main(int argc, char *argv[])
{
	std::string		infile;
	std::string		pattern;
	std::string		substitute;
	std::ifstream	ifs;
	std::ofstream	ofs;
	size_t			buf_size;
	std::string		buffer;

	if (check_arguments(argc, argv[1]) < 0)
		return EXIT_FAILURE;
	
	infile = argv[1];
	pattern = argv[2];
	substitute = argv[3];
	
	if (open_file(infile, ifs) < 0)
		return EXIT_FAILURE;
	
	if (open_file(infile + ".replace", ofs) < 0)
		return EXIT_FAILURE;
	
	buf_size = pattern.size();
	if (buf_size == 0)
	{
		buf_size = 1;
		pattern += '\0';
	}
	
	while (ifs.good())
	{
		while (buffer.size() < buf_size && ifs.good())
		{
			buffer += ifs.get();
			if (!ifs.good())
				buffer.erase(buffer.size() - 1);
		}
		if (buffer.compare(pattern) == 0)
		{
			if (!substitute.empty())
				ofs << substitute;
			buffer.erase();
		}
		else
		{
			if (buffer.size() == buf_size)
			{
				ofs.put(buffer[0]);
				buffer.erase(0, 1);
			}
			else if (!buffer.empty())
			{
				ofs << buffer;
			}
		}
	}
	return EXIT_SUCCESS;
}
