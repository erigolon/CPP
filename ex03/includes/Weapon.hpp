/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:23:55 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/01 11:55:43 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {

private:

	std::string	_type;

public:

	Weapon(std::string type);
	~Weapon(void);

	std::string	getType(void);
	void		setType(std::string	type);

};

#endif