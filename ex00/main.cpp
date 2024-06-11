/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:07:59 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/10 14:35:25 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Zombie.hpp"

int	main( void )
{
	Zombie*		ptr;
	std::string	zomb1;
	std::string	zomb2;

	zomb1 = "Shaun";
	zomb2 = "Rabid";

	std::cout << "Dynamically allocating zombie \"" << zomb1 << "\":" << std::endl;
	ptr = newZombie(zomb1);
	if (!ptr)
	{
		std::cerr << "Allocation failed" << std::endl;
		return EXIT_FAILURE;
	}
	ptr->announce();
	std::cout << std::endl;

	std::cout << "Calling a function with locally allocated zombie \"" << zomb2 << "\":" << std::endl;
	randomChump("Rabid");
	std::cout << std::endl;

	std::cout << "Deleting dynamically allocated zombie \"" << zomb1 << "\":" << std::endl;
	delete ptr;
	return EXIT_SUCCESS;
}
