/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:19:22 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/14 16:16:36 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(const std::string& name){
    this->name = name;
}

HumanB::~HumanB(){}

void HumanB::attack() const{
    
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}


void  HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}