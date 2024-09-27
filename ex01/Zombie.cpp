/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:04:46 by erigolon          #+#    #+#             */
/*   Updated: 2024/09/27 16:22:58 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}
Zombie::~Zombie(void)
{
	std::cout << this->_name << ": Byeeee byeeeeezzzZ..." << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}