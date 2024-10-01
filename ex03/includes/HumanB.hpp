/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:53:38 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/01 12:03:14 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>

# include "Weapon.hpp"

class HumanB {

private:

    std::string _name;
	Weapon*		_weapon;

public:

	HumanB(std::string name);
	~HumanB(void);

    void    attack(void);
	void	setWeapon(Weapon& weapon);

};

#endif