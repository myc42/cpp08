/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 23:05:13 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/13 23:05:18 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <exception>
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>




class Span
{

    private :
                unsigned int _n;
                std::vector <int > tab ;
                
    public  : 
            Span(unsigned int n) ;
            ~Span ();
            void addNumber(int numAdd );
            unsigned int  shortestSpan();
            unsigned int longestSpan();
            Span(Span const &other);
            Span& operator=(Span const &other);
            class SpanIsFull : public std::exception 
            {
             public : 
                virtual const char *what() const throw () {
                    return "Capacité maximale atteinte !";} 
            } ;
            class ImpossibleToFind : public std::exception { public : virtual const char *what() const throw (){ return "Impossible to find !";} } ;

} ;
