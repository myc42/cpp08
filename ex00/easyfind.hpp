/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:49:27 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/13 21:17:39 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once 
#include <vector>
#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception {
public:
    virtual const char *what() const throw() {
        return " non trouvé dans le conteneur";
    }
};

template <typename T>
void easyfind(T& conteneur, int integ) {
    typename T::iterator it = std::find(conteneur.begin(), conteneur.end(), integ);

    if (it != conteneur.end()) {
        std::cout << "Première occurrence trouvée: " << *it << std::endl;
    } else {
        throw NotFoundException();
    }
}