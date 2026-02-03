/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 23:06:34 by macoulib          #+#    #+#             */
/*   Updated: 2026/02/03 22:45:15 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>



int main()
{
    std::cout << "Test MutantStack" << std::endl;
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top: " << mstack.top() << " ( 17)" << std::endl;

    mstack.pop();

    std::cout << "Size: " << mstack.size() << " ( 1)" << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    // --- Test des Itérateurs ---
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    std::cout << "Contenu de la pile via itérateurs :" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    // --- Comparaison 
    
    std::cout << "\n--- Comparaison  std::list" << std::endl;
    std::list<int> ltest;
    ltest.push_back(5);
    ltest.push_back(3);
    ltest.push_back(5);
    ltest.push_back(737);
    ltest.push_back(0);

    std::list<int>::iterator lit = ltest.begin();
    std::list<int>::iterator lite = ltest.end();
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        ++lit;
    }

    // copie
    std::stack<int> s(mstack);
    std::cout << "\nCopie vers std::stack reussie, size: " << s.size() << std::endl;

    return 0;
}