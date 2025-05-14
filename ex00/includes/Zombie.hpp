/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:32:24 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/14 12:34:21 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
    public:
        Zombie(std::string name);
        ~Zombie();

        void announce(void);

    private:
        std::string _name;
};
void randomChump(std::string name);
Zombie* newZombie(std::string name);
#endif