/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:40:33 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/01 12:03:10 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>

# include "Weapon.hpp"

class HumanA {

private:

    std::string	_name;
	Weapon*		_weapon;

public:

	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

    void    attack(void);

};

#endif