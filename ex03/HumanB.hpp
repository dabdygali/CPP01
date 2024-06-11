/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:11:45 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/11 11:09:35 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _HUMANB_HPP_
	#define _HUMANB_HPP_

	#include "Weapon.hpp"
	#include <string>
	class HumanB
	{
	private:
		std::string		_name;
		Weapon const*	_wp;
	public:
		~HumanB();
		HumanB(std::string const& name);
		void	attack( void );
		void	setWeapon(Weapon const& wp);
	};

#endif
