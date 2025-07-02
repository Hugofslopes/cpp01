/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:05:59 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/07/02 17:09:36 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		
		std::string const &getType() const;
		void setType(const std::string &type);
		
	private:
		std::string type;
};
#endif