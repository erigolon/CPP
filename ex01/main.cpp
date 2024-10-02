/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:04:24 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/02 13:31:26 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/Zombie.hpp"

int	main(void)
{
	int 	N;
	Zombie* horde_Z;

	N = 5;
	if (N < 0)
		return (-1);
	horde_Z = zombieHorde(N, "Joe");
	for (int i = 0; i < N; i++)
		horde_Z[i].announce();

	delete[] horde_Z;

	return (0);
}