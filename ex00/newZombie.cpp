/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:04:31 by erigolon          #+#    #+#             */
/*   Updated: 2024/09/27 16:23:55 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie* new_Z;
	new_Z = new Zombie(name);
	return (new_Z);
}