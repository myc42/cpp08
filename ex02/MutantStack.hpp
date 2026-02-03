/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 23:06:40 by macoulib          #+#    #+#             */
/*   Updated: 2026/02/03 22:41:22 by macoulib         ###   ########.fr       */
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
            /* vas chercher le type de l'itérateur du conteneur qui est caché à l'intérieur de la pile.*/
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