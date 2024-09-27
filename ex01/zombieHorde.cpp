/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:32:38 by erigolon          #+#    #+#             */
/*   Updated: 2024/09/27 16:23:04 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie* horde_Z;

	horde_Z = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde_Z[i].set_name(name);

	return (horde_Z);	
}