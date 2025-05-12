/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:28:53 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/12 18:29:20 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < 0; i++)
    {
        horde[i] = Zombie(name);
    }
    return (horde);
}
