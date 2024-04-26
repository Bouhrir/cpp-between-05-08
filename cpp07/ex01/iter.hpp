/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:28:29 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/10 17:10:56 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

using std::cout;
using std::endl;
using std::string;

template <typename T, typename fx>
void iter(T *arr, size_t length, fx function){
	for (int i = 0; i < (int)length;i++){
		function(arr[i]);
	}
}

template <typename T>
void print(T &element){
	cout << element << endl;
}
