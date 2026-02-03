/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 23:04:58 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/13 23:04:59 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Span.hpp"

// a revoir des modules oublies .
int main() {
    
    // normal et + 1 
    try 
    { 
         Span spa(2);
         spa.addNumber(1);
         spa.addNumber(2);
         //spa.addNumber(200);
    }
     catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    // long et short 
    try 
    { 
         Span spa(6);
         spa.addNumber(1);
         spa.addNumber(4);
         spa.addNumber(6);
         spa.addNumber(5);
         spa.addNumber(2);
         spa.addNumber(3);
         std::cout << spa.longestSpan() << std::endl;
        std::cout << spa.shortestSpan() << std::endl;
    }
     catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
     // long et short error 
    try 
    { 
         Span spa(1);
         spa.addNumber(3);
         std::cout << spa.longestSpan() << std::endl;
        std::cout << spa.shortestSpan() << std::endl;
    }
     catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

     // copy operator 
    try
    {
         Span x(10);
         x.addNumber(2);
         Span v = x ;
         Span Z(x) ;
         

    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    // test exercice 
    try
    {
        Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
   
    return 0;
} 