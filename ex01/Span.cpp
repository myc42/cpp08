/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 20:55:56 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/13 22:40:14 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(unsigned int n) : _n(n) 
{
    tab.reserve(n) ;
} 

Span::~Span ()
{

}
void Span::addNumber( int numAdd )
{
    if(tab.size() < _n)
        tab.push_back(numAdd) ;
    else   
        throw SpanIsFull();
};

unsigned int Span::shortestSpan()
{
    int min  = INT_MAX;
    if(tab.size () < 2)
       throw ImpossibleToFind();
    std::vector<int> cpytab = tab;
    std::sort(cpytab.begin(), cpytab.end());
    for (size_t i = 0 ; i < cpytab.size() - 1 ; ++i)
    {
        if(cpytab[i + 1] - cpytab [i] < min)
            min = cpytab[i + 1] - cpytab [i] ;
    }
    return min ; 
};

unsigned int Span::longestSpan()
{
    if(tab.size () < 2)
            throw ImpossibleToFind();
    std::vector<int> cpytab = tab;
    int max = *std::max_element(tab.begin(), tab.end());
    int min = *std::min_element(tab.begin(), tab.end());
    return max - min ; 
};

Span &Span::operator=(Span const &other)
{
    _n = other._n;
    tab = std::vector<int>(other.tab);
    return *this ;

}

Span::Span(Span const &other) : _n(other._n) 
 {
	tab = std::vector<int>(other.tab);
}
