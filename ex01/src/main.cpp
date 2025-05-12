/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:47:23 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/12 18:27:07 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main()
{
    Zombie *horde = Zombie::zombieHorde(10, "HordeZombie");
    for (int i = 0; i < 10; i++)
		horde[i].announce();
    delete[] horde;
}