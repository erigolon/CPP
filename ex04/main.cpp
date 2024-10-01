/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:12:52 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/01 15:08:07 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

void	copy_file(char* file, std::string search, std::string replacement)
{
	std::string new_file = file;
	std::ifstream file_src(file);
	if (file_src.fail())
	{
		std::cout << "Can't read file " << file << std::endl;
		return ;
	}
	
	std::ofstream file_dst((new_file + ".replace").c_str());
	if (file_dst.fail())
	{
		std::cout << "Can't write to file " << new_file + ".replace"<< std::endl;
		return ;
	}
	
	std::string line;
    while (std::getline(file_src, line)) 
	{
        std::string new_line;
        size_t pos = 0;
        size_t search_length = search.length();

        while ((pos = line.find(search, pos)) != std::string::npos)
		{
            new_line += line.substr(0, pos);
            new_line += replacement;

            pos += search_length;
            line = line.substr(pos);
            pos = 0;
        }
        new_line += line;
        file_dst << new_line << std::endl;
    }
	
	return ;
}

int	fileExists(const char* file_name)
{
	std::ifstream file(file_name);
	if (file.good())
		return (1);
	else
		return (0);
}

int	main(int argc, char** argv)
{
	std::string search = argv[2];
	std::string replacement = argv[3];

	if (argc != 4)
	{
		std::cout << "Incorrect number of parameters." << std::endl;
		return (1);
	}
	else if (!fileExists(argv[1]))
	{
		std::cout << "This file does not exist." << std::endl;
		return (1);
	}
	else
		copy_file(argv[1], search, replacement);
	return (0);
}