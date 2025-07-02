/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:54:06 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/15 12:18:59 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <cstdlib>

# define DEBUG "I love working with Git. Finally figuring out how to push my commits is so satisfying!\n"
# define INFO "I can't believe I have to pull before every push. Why can't my branch stay up to date?\n"
# define WARNING "I deserve a break after resolving endless merge conflicts!\n"
# define ERROR "Forget pushing! My push was rejected again due to conflicts!"
# define DEFAULT "[ Who knows, probably complaining about stuff ]"

enum LogLevel {
	debug,
	info,
	warning,
	errors,
};

class Harl {
	
	public:
		Harl();
		~Harl();
		
		void complain(std::string level);

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};
#endif