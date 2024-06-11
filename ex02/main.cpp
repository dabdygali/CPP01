/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:01:47 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/10 16:13:51 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
int	main( void )
{
	std::string const	str = "HI THIS IS BRAIN";
	std::string const*	stringPTR;
	std::string const&	stringREF = str;

	stringPTR = &str;
	std::cout << "The memory address of the string variable:	" << &str << std::endl;
	std::cout << "The memory address held by \"stringPTR\":		" << stringPTR << std::endl;
	std::cout << "The memory address held by \"stringREF\":		" << &stringREF << std::endl;

	std::cout << "The value of the string variable:	" << str << std::endl;
	std::cout << "The value pointed to by \"stringPTR\":	" << *stringPTR << std::endl;
	std::cout << "The value pointed to by \"stringREF\":	" << stringREF << std::endl;

	return EXIT_SUCCESS;
}
