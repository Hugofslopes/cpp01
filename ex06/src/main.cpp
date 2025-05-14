/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:47:51 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/14 18:52:57 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
		exit (1);
	std::string str = av[1];
	if (str != "WARNING" && str != "DEBUG" && str != "INFO" &&str != "ERROR")
		exit (1);
	harl.complain(str);
	return (0);
}