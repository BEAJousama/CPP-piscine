/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:16:17 by obeaj             #+#    #+#             */
/*   Updated: 2023/03/23 14:32:34 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool    isNumber(std::string val)
{
    size_t i = 0;
    
    if (val.find(",") != std::string::npos)
        val.replace(val.find(","), 1, ".");
    if(val[i] == '-' || val[i] == '+')
            i++;
    for (i = i * 1; i < val.length(); i++)
    {
        if (!isdigit(val[i]))
            return (false);
    }
    return (true);
}

int main(int ac, char **av)
{
    std::vector<int> args;
    while(ac > 1)
    {
        std::string s(av[ac - 1]);
        if (isNumber(s) && atoi(av[ac - 1]) >= 0)
            args.push_back(atoi(av[ac - 1]));
        else
        {
            std::cerr << "Error: invalid argument." << std::endl;
            return (1);
        }
        ac--;
    }    
    PmergeMe p(args);
    p.sortContainers();
}