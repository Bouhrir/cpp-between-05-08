/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:27:55 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/07 14:45:37 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(){
	int i[5] = {1,2,3,4,5};
	
	iter<int>(i, 5, print<int>);
	
	string arr[3] = {"skrt7", "miroka", "7afozli9"};
	iter<string>(arr, arr->length(), print<string>);
}
