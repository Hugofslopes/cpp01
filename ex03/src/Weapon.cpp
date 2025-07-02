/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:21:25 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/07/02 17:09:39 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type){
	this->type = type;
}

Weapon::~Weapon(){}

std::string const & Weapon::getType() const{
	return (type);
}

void Weapon::setType(const std::string &type)
{
	this->type = type;
}
