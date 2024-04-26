/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:37:25 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/14 17:37:11 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <vector>
using std::string;
using std::cout;
using std::endl;
class Span {
	private:
		unsigned int N;
	public:
		std::vector<int> vec;
		Span();
		Span(unsigned int);
		Span(Span const &);	
		Span &operator=(Span const &);
		void addNumber(int);
		int shortestSpan();
		int longestSpan();
		~Span();	
		template <typename T>
		void addRange(const T& begin, const T& end){
			int space = N - vec.size();
			int range = std::distance(begin, end);
			if (range > space)
				throw std::out_of_range("not enough space");
			vec.insert(vec.end(), begin, end);
		}
};
