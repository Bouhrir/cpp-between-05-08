/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:03:10 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/31 15:10:41 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
using std::string;
using std::endl;
using std::cout;

template <typename T>
class Array {
	private:
		T *arr;
		int length;
	public:
	Array(){
		arr = NULL;
		length = 0;
	}
	
	Array(Array const &Copy){
		if (arr)
			delete [] arr;
		length = Copy.length;
		arr = new T[length];
		for (int i = 0;i < length;i++){
			arr[i] = Copy.arr[i];
		}
	}
	
	Array(unsigned int n){
		length = n;
		arr = new T[length];
	
	}
	
	Array &operator=(Array const &Assign){
		if (arr)
			delete [] arr;
		length = Assign.length;
		arr = new T[length];
		for (int i = 0;i < length;i++){
			arr[i] = Assign.arr[i];
		}
		return *this;
	}
	
	T &operator[](size_t idx){
		if (idx >= static_cast<size_t>(length))
			throw std::out_of_range("out of range");
		return arr[idx];
	}
	const T &operator[](size_t idx) const{
		if (idx >= static_cast<size_t>(length))
			throw std::out_of_range("out of range");
		return arr[idx];
	}
	int size(){
		return length;
	}
	
	~Array(){
		if (arr)
			delete [] arr;	
	}
};