/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:04:49 by erigolon          #+#    #+#             */
/*   Updated: 2024/09/27 15:37:17 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {

private:

	std::string	_name;

public:

	Zombie(std::string name);
	~Zombie(void);

	void	announce(void);
	
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif