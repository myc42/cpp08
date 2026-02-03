/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 23:06:40 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/14 18:35:44 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public :
            MutantStack() {};
            ~MutantStack(){ };
            //crée un nouveau nom de type appelé const_iterator qui représente le type d’itérateur constant du conteneur interne utilisé par std::stack<T>
            typedef typename std::stack<T>::container_type::iterator iterator;
            typedef typename std::stack<T>::container_type::const_iterator const_iterator;
            iterator begin() { return this->c.begin(); }
            iterator end() { return this->c.end(); }
            const_iterator begin() const { return this->c.begin(); }
            const_iterator end() const { return this->c.end(); }
            MutantStack(const MutantStack& other) : std::stack<T>(other) {};
            MutantStack& operator=(const MutantStack& other)
            {
                std::stack<T>::operator=(other);
                return *this;
            }

};