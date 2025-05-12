/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:32:22 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/12 18:29:03 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie() : name("Unnamed") {
    std::cout << "Default constructor created a new Zombie"
    << std::endl;
}

Zombie::Zombie(std::string name) : name(name) {
    std::cout << "Parameterized constructor created a new Zombie"
    << std::endl;
}

Zombie::~Zombie(){
    std::cout << name << " - Zombie Destructor" << std::endl;
}

Zombie* Zombie::newZombie(std::string name) {
    return (new Zombie(name)); 
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::randomChump(std::string name)
{
    Zombie N_zombie(name);
    N_zombie.announce(); 
}
