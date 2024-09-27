/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:04:24 by erigolon          #+#    #+#             */
/*   Updated: 2024/09/27 16:23:06 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/Zombie.hpp"

int	main(void)
{
	int 	N;
	Zombie* horde_Z;

	N = 5;	
	horde_Z = zombieHorde(N, "Joe");
	for (int i = 0; i < N; i++)
		horde_Z[i].announce();

	delete[] horde_Z;

	return (0);
}