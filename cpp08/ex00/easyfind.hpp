/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:09:20 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/14 15:15:12 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using std::string;
using std::cout;
using std::endl;

template <typename T>
void easyfind(T &type, int integer){
	if (std::find(type.begin(), type.end(), integer) != type.end())
		cout << "\033[1;32mfound\033[0m" << endl;
	else
		throw std::runtime_error("\033[1;31mnot found\033[0m");
}