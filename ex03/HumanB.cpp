/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:46:26 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/11 11:09:41 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include <cstdlib>

HumanB::~HumanB()
{
}

HumanB::HumanB(std::string const& name) : _name(name)
{
	_wp = NULL;
}

void	HumanB::attack( void )
{
	if (!_wp)
	{
		std::cout << _name << " has no weapon to attack" << std::endl;
		return;
	}
	std::cout << _name << " attacks with their " << _wp->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon const& wp)
{
	_wp = &wp;
}
