/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:32:24 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/15 12:06:16 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void setName(const std::string& str);
		void announce(void);

	private:
		std::string name;
};
Zombie* zombieHorde(int N, std::string name);
#endif