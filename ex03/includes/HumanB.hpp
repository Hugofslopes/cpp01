/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:44:15 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/07/02 17:19:12 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "../includes/Weapon.hpp"

class HumanB{
	public:
		HumanB(const std::string& name);
		~HumanB();
		
		void attack() const;
		void setWeapon(Weapon &Weapon);
	
	private:
		Weapon     *weapon;
		std::string name;
};
#endif