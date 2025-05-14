/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:47:51 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/14 20:27:21 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
		std::cout << DEFAULT << std::endl, exit (1);
	std::string str = av[1], levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	if (str != "WARNING" && str != "DEBUG" && str != "INFO" &&str != "ERROR")
		std::cout << DEFAULT << std::endl, exit (1);

	std::string level = av[1];
	int index = -1;
	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			index = i;

	switch (index) {
	case debug:
		harl.complain(levels[index++]);
		// fall through
	case info:
		harl.complain(levels[index++]);
		// fall through
	case warning:
		harl.complain(levels[index++]);
		// fall through
	case errors:
		harl.complain(levels[index]);
		break ;
	}

	return (0);
}