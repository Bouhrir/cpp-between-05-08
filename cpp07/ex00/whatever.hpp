/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:15:57 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/06 18:52:19 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

using std::string;
using std::endl;
using std::cout;

template <typename T>
void swap(T &a, T &b){
	T tmp;
	
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T &a, T &b){
	if (a > b)
		return b;
	return a;
}

template <typename T>
T max(T &a, T &b){
	if (a > b)
		return a;
	return b;
}