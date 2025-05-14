/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:54:06 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/14 17:08:54 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <sstream>

# define DEBUG " love having extra bacon for my 7XL-double-cheese-triple-pickle- \
special- ketchup burger. I really do!"
# define INFO " cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!"
# define WARNING "I think I deserve to have some extra bacon for free. I’ve been \
coming for years, whereas you started working here just last month."
# define ERROR 'This is unacceptable! I want to speak to the manager now.'

class Harl {
    public:
        Harl();
        ~Harl();
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void complain(std::string level);

    private:
    
};
#endif