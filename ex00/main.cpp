/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:02:48 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/13 21:17:27 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

// d'autre exo ;

int main (void)
{
std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    try
    {
        easyfind(v,5) ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0 ;
}