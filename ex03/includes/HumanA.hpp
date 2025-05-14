/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:18:55 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/14 15:44:12 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "../includes/Weapon.hpp"

class HumanA{
    public:
        HumanA(const std::string& name, const Weapon& weapon);
        ~HumanA();
        void attack() const;
        
    private:
        Weapon      weapon;
        std::string name;

};

#endif