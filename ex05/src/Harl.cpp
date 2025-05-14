/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:53:17 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/14 17:14:39 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"


Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(void){
    std::cout << DEBUG << std::endl;
}

void Harl::info(void){
    std::cout << INFO << std::endl;
}

void Harl::warning(void){
    std::cout << WARNING << std::endl;
}

void Harl::error(void){
    std::cout << ERROR << std::endl;
}

void Harl::complain(std::string level){
    int nb;
    Harl harl;
    std::istringstream iss(level);
    iss >> nb;
    
    switch (nb){
        case 1:
            harl.debug();
        case 2:
            harl.info();
        case 3:
            harl.warning();
        case 4:
            harl.error();
    }
}