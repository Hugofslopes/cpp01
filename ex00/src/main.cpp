/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:47:23 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/15 12:04:37 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main()
{
	Zombie *fourEverALive = newZombie("4everAlive");

	{
	Zombie zombie1("AlmostDead");
	zombie1.announce();
	}
	std::cout << std::endl;
	randomChump("NotDeadYet");
	{
		std::cout << std::endl;
	}
	std::cout << "IS THERE ANYONE ALIVE??" << std::endl;;
	(*fourEverALive).announce();
	delete fourEverALive;
}
