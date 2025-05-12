/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:47:23 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/12 17:15:09 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main()
{
    Zombie Zombie1;
    Zombie1.announce();
    std::cout << std::endl;

    Zombie newZombie("dead");
    newZombie.announce();
    std::cout << std::endl;

    Zombie::randomChump("notDeadYet");
    std::cout << std::endl;

    Zombie* persistentZombie = new Zombie("Persistent Zombie");
        (*persistentZombie).announce();
    delete(persistentZombie);
}