/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:16:12 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/02 12:45:45 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl
{
private:

    void	_debug(void);
    void	_info(void);
    void	_warning(void);
    void	_error(void);
    
public:

    Harl(void);
    ~Harl(void);
    
    void	complain(std::string level);

};

#endif