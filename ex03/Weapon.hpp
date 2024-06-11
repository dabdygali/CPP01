/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:40:56 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/11 11:10:11 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _WEAPON_HPP_
	#define _WEAPON_HPP_

	#include <string>
	class Weapon
	{
	private:
		std::string	_type;
	public:
		Weapon(std::string const& type);
		~Weapon();
		std::string const&	getType( void ) const;
		void				setType(std::string const& type);
	};

#endif
