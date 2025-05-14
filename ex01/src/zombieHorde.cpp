/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:30:18 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/14 14:22:34 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombieH = new Zombie[N];

    for (size_t i = 0; i < static_cast<size_t>(N); i++)
		zombieH[i].setName(name);
    return (zombieH);
}
