/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:53:17 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/14 18:43:48 by hfilipe-         ###   ########.fr       */
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
    void (Harl::*ptrFuncs[])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error
    };
    size_t i = 0;
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    for (; i < 4 && levels[i] != level ; i++)
        ;
    i < 4 ? (this->*ptrFuncs[i])() : exit(1);
}