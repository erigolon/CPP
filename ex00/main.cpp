/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:04:24 by erigolon          #+#    #+#             */
/*   Updated: 2024/09/27 16:24:02 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

int	main(void)
{
	Zombie*	new_Z;
	
	new_Z = newZombie("Joe");
	new_Z->announce();

	randomChump("Matt");

	delete new_Z;
	return (0);
}