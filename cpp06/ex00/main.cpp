/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:54:47 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/05 13:34:13 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

int main(int  ac, char **av){
	if (ac == 2){
		string c = av[1];
		ScalarConverte::convert(c);
	}
	else{
		std::cerr << "Please enter : \033[1;31m./ScalarConverter \"(character | integer | float)\" \033[0m\n";
		return(1);
	}
	return(0);

	
}