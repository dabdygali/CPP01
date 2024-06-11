/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:44:43 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/11 11:13:56 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _HUMANA_HPP_
	#define _HUMANA_HPP_

	#include "Weapon.hpp"
	#include <string>
	class HumanA
	{
	private:
		std::string		_name;
		Weapon const&	_wp;
	public:
		~HumanA();
		HumanA(std::string const& name, Weapon const& wp);
		void	attack( void );
	};

#endif
