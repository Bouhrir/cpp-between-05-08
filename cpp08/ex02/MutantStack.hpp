/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:29:21 by obouhrir          #+#    #+#             */
/*   Updated: 2024/01/23 10:55:10 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <stack>
#include <list>

using std::cout;
using std::string;
using std::endl;

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		// typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		// typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		
		MutantStack(){}
		MutantStack(MutantStack const &Copy){
			*this = Copy;
		}
		MutantStack &operator=(MutantStack const  &assign){
			this->c = assign.c;
			return *this;
		}
		//-----iterator-----//
		iterator begin() {
			return this->c.begin();
		}
		iterator end(){
			return this->c.end();
		}
		//----------------//
		//-----const iterator-----//
		// const_iterator begin() const {
		// 	return this->c.begin();
		// }
		// const_iterator end() const {
		// 	return this->c.end();
		// }
		//----------------//
		//-----rev iterator-----//
		reverse_iterator rbegin(){
			return this->c.rbegin();
		}
		reverse_iterator rend(){
			return this->c.rend();
		}
		//----------------//
		//-----const rev iterator-----//
		// const_reverse_iterator rbegin() const {
		// 	return this->c.rbegin();
		// }
		// const_reverse_iterator rend() const {
		// 	return this->c.rend();
		// }
		//----------------//
		~MutantStack(){}
};
