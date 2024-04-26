/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:08:09 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/14 15:13:22 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
	try {
		std::vector<int> vec;
		for (int i = 0; i < 6; i++){
			vec.push_back(i);
		}
		easyfind(vec, 3);
		easyfind(vec, 9);
    } catch (const std::exception& e) {
        std::cerr << e.what() << endl;
    }
}