/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:04:39 by erigolon          #+#    #+#             */
/*   Updated: 2024/09/27 16:23:51 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie* new_Z;
	new_Z = new Zombie(name);
	new_Z->announce();
	delete new_Z;
}