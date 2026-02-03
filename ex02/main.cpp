/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 23:06:34 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/14 18:43:31 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// retouch main
int main ()
{
    MutantStack<int> x;
	x.push(2);
	x.push(1);
	std::cout << x.size() << std::endl;
	std::cout << x.top() << std::endl;
	x.pop();
	x.push(3);
	x.push(5);
	x.push(737);
	x.push(0);
	MutantStack<int>::iterator it = x.begin();
	MutantStack<int>::iterator ite = x.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(x);
    return (0);
}