/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:44:03 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/10 15:41:45 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>
#include <cstdlib>

Zombie*	zombieHorde(int N, std::string const& name)
{
	Zombie*	ptr;

	if (N <= 0)
		return NULL;
	ptr = new(std::nothrow) Zombie[N];
	if (!ptr)
		return NULL;
	while (N > 0)
	{
		N--;
		ptr[N].setName(name);
	}
	return	ptr;
}
