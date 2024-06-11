/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:19:31 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/11 11:14:00 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::~HumanA()
{
}

HumanA::HumanA(std::string const& name, Weapon const& wp) : _name(name), _wp(wp)
{
}

void	HumanA::attack( void )
{
	std::cout << _name << " attacks with their " << _wp.getType() << std::endl;
}
