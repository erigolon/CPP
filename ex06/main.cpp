/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:14:35 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/02 13:22:44 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) 
{
	Harl		harl;
	int			level;
	std::string	input;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	input = argv[1];
	if (input == "DEBUG")
        level = 0;
    else if (input == "INFO")
        level = 1;
    else if (input == "WARNING")
        level = 2;
    else if (input == "ERROR")
        level = 3;
	else
		level = -1;
    switch (level)
    {
        case 0:
			std::cout << "[ DEBUG ]" << std::endl;
            harl.complain("DEBUG");
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
            harl.complain("INFO");
			std::cout << std::endl;
			
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
            harl.complain("WARNING");
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
            harl.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about" <<
				" insignificant problems ]" << std::endl;
    }
    return (0);
}
