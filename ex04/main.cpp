/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:29:37 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/14 16:48:42 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>


void replaceAll(std::string& str, const std::string& s1, const std::string& s2) {
    std::string::size_type pos = 0;
    while ((pos = str.find(s1, pos)) != std::string::npos) {
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos += s2.length();
    }
}

int main(int ac, char **av)
{
    if (ac != 4)
        std::cerr << "Invalid number of inputs" << std::endl, exit(1);

    std::string s1 = av[2], s2 = av[3];
    if (s1.empty())
        std::cerr << "Empty S1" << std::endl, exit(1);

    std::ifstream input(av[1], std::ios::in | std::ios::binary);
    if (!input)
        std::cerr << "Error opening input file: " << av[1] << std::endl, exit(1);

    std::string outputFilename = av[1];
    outputFilename += ".content";

    std::ofstream output(outputFilename.c_str(), std::ios::out | std::ios::binary);
    if (!output)
        std::cerr << "Error opening output file: " << outputFilename << std::endl,
        input.close(), exit(1);

    std::string line;
    while (std::getline(input, line)) {
        replaceAll(line, s1, s2);
        output << line << std::endl;
    }
    input.close();
    output.close();
    return (0);
}
