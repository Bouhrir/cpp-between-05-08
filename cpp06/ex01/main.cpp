/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:20:19 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/05 16:50:41 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <cstdint>


int main(){
	
	Data src;
	src.value = 13;
	
	uintptr_t x = Serializer::serialize(&src);
	Data *des = Serializer::deserialize(x);
	
	cout << &src <<endl;
	cout << des <<endl;
	if (des == &src){
		cout << "\033[1;32msuccessful!\033[0m" << endl;
	}
	else
		std::cerr << "\033[1;31mfield!\033[0m" << endl;		
	
	return 0;
}
