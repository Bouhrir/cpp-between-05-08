/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:02:34 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/12 15:23:40 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
	try{
		Array<int> arr(6);
		cout << "\033[1;32m-----arr----\033[0m\n";
		cout << "arr size : "<< arr.size() << endl;
		for (int i = 0; i < arr.size(); ++i) {
            arr[i] = i + 1;
            std::cout << "Element " << i << ": " << arr[i] << std::endl;
        }
		cout << "\033[1;32m--copy arr--\033[0m\n";
		Array<int> arrCopy;
		arrCopy = arr;
		for (int i = 0; i < arrCopy.size(); ++i) {
            std::cout << "Element " << i << ": " << arrCopy[i] << std::endl;
        }
		cout << "\033[1;32m----excp----\033[0m\n";
		cout << arrCopy[6] << endl;
		
	}
	catch(std::exception &e){
		cout << e.what() << endl;
	}
}

