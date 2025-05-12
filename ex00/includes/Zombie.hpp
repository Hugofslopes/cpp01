/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:32:24 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/12 17:03:35 by hfilipe-         ###   ########.fr       */
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

        Zombie* newZombie(std::string name);
        void announce(void);
        static void randomChump(std::string name);

    private:
        std::string name;
};
#endif