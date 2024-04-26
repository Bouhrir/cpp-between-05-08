/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:37:09 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/14 17:38:31 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <list>
int main(){


	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	cout << "----tests----\n";
	try{
		Span a(7);
		std::list<int> vec;
		vec.push_back(3);
		vec.push_back(7);
		vec.push_back(0);
		vec.push_back(10);

		a.addNumber(10); cout << "\033[1;32madding number\033[0m\n";
		a.addNumber(9); cout << "\033[1;32madding number\033[0m\n";
		a.addNumber(20); cout << "\033[1;32madding number\033[0m\n";
		
		a.addRange(vec.begin(), vec.end());
		
	}
	catch(std::exception &e){
		cout << e.what() << endl;
	}
}