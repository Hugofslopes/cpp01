/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:19:22 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/14 15:43:26 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(const std::string& name, const Weapon& weapon){
    this->weapon = weapon;
    this->name = name;
}

HumanA::~HumanA(){}

void HumanA::attack() const{
    
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}