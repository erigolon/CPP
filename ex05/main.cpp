/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:14:35 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/02 12:37:51 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "Test 1: DEBUG level\n";
    harl.complain("DEBUG");

    std::cout << "\nTest 2: INFO level\n";
    harl.complain("INFO");

    std::cout << "\nTest 3: WARNING level\n";
    harl.complain("WARNING");

    std::cout << "\nTest 4: ERROR level\n";
    harl.complain("ERROR");

    std::cout << "\nTest 5: UNKNOWN level\n";
    harl.complain("SILLY");
    
    return (0);
}