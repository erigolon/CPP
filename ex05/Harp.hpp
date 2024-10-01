/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harp.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:16:12 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/01 15:20:12 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARP_HPP
# define HARP_HPP

# include <string>
# include <iostream>

class Harp
{
private:

    void	_debug(void);
    void	_info(void);
    void	_warning(void);
    void	_error(void);
    
public:

    Harp(void);
    ~Harp(void);
    
    void	complain(std::string level);

};

#endif