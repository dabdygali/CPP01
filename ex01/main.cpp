/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:07:59 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/10 15:57:48 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Zombie.hpp"

int	main( void )
{
	Zombie*		ptr;
	std::string	zomb1;
	int			N;
	int			i;

	zomb1 = "Shaun";
	N = 10;

	std::cout << "Dynamically allocating the horde of " << N << " zombies, all named " << zomb1 << std::endl;
	ptr = zombieHorde(N, zomb1);
	if (!ptr)
	{
		std::cerr << "Allocation failed" << std::endl;
		return EXIT_FAILURE;
	}
	i = 0;
	while (i < N)
	{
		std::cout << i + 1 << ")	";
		ptr[i].announce();
		i++;
	}
	std::cout << std::endl;

	std::cout << "Deleting dynamically allocated horde of zombies" << std::endl;
	delete[] ptr;
	return EXIT_SUCCESS;
}
