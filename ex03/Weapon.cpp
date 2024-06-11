/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:33:07 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/11 11:10:15 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string const& type) : _type(type)
{
}

std::string const&	Weapon::getType( void ) const
{
	return _type;
}

void				Weapon::setType(std::string const& type)
{
	_type = type;
}
