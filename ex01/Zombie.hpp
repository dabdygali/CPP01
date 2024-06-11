/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:11:34 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/10 15:51:55 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _ZOMBIE_HPP
	#define _ZOMBIE_HPP

	#include <string>
	#include <iostream>

	class Zombie
	{
	private:
		std::string	_name;
	protected:
	public:
		Zombie();
		Zombie(std::string const& name);
		~Zombie();
		std::string const&	getName( void ) const;
		void				setName(std::string const& name);
		void				announce( void ) const;
	};
	
	Zombie*	zombieHorde(int N, std::string const& name);

#endif
