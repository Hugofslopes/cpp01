/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:05:59 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/14 15:41:17 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{
    public:
        Weapon();
        Weapon(const std::string& type);
        ~Weapon();
        std::string getType() const;
        void setType(const std::string& type);
    private:
    std::string type;
};

#endif