/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:47:23 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/15 12:06:40 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <cstdlib>
#include <cstdio> 

int main(int ac, char **av)
{
	
	if (ac != 3)
		std::cerr << "Invalid number of inputs" << std::endl, exit (1);
	size_t N = std::atoi(av[1]);
	if ( N <= 0)
		std::cerr << "Invalid number of inputs" << std::endl, exit (1);
	{
		Zombie *fourEverALive = zombieHorde(N, av[2]);

		for (size_t i = 0 ; i < N; i++)
			fourEverALive[i].announce();
		delete []fourEverALive;  
	}

	{
		Zombie *walkingDead = zombieHorde(N, av[2]);
	
		for (size_t i = 0 ; i < N; i++)
		{
			int randomNumber = i + 1;
			char buffer[12];
			std::sprintf(buffer, "%d", randomNumber);
			walkingDead[i].setName(buffer);
		}

		for (size_t i = 0 ; i < N; i++)
			walkingDead[i].announce();
		delete []walkingDead;
	}
}
