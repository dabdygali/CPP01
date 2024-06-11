/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:38:16 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/10 14:24:50 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "default_name";
	std::cout << "Zombie \"" << _name << "\" has been created" << std::endl;
}

Zombie::Zombie(std::string const& name) : _name(name)
{
	std::cout << "Zombie \"" << _name << "\" has been created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie \"" << _name << "\" has been destroyed" << std::endl;
}

std::string const&	Zombie::getName( void ) const
{
	return	_name;
}

void				Zombie::setName(std::string const& name)
{
	_name = name;
}

void				Zombie::announce( void ) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
