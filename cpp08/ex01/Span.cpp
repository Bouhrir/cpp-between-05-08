/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:40:33 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/12 16:39:03 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
	N = 0;
}

Span::Span(unsigned int N){
	this->N = N;
}

Span::Span(Span const &Copy){
	*this = Copy;
}

Span &Span::operator=(Span const &assign){
	N = assign.N;
	return *this;
}

void Span::addNumber(int num){
	if (vec.size() >= N)
		throw std::out_of_range("\033[1;31mcannot add more numbers\033[0m");
	vec.push_back(num);
}

int Span::shortestSpan(){
	if (vec.size() <= 1)
		throw std::out_of_range("not enough numbers");
	std::sort(vec.begin(), vec.end());
	int first = vec[1] - vec[0];
	for(size_t i = 1; i < vec.size();i++)
	{
		int sec = vec[i] - vec[i - 1];
		if (sec < first)
			first = sec;
	}
	return first;
}

int Span::longestSpan(){
	if (vec.size() <= 1)
		throw std::out_of_range("not enough numbers");
	std::sort(vec.begin(), vec.end());
	return vec.back() - vec.front();
}




Span::~Span(){
	
}