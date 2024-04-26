/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:23:47 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/22 18:24:57 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

	try {
		Bureaucrat a("miroka", 1);
		Bureaucrat b("skrt7", 150);
		cout << a << endl;
		a.inc();
		cout << b << endl;
		b.dec();
	}
	catch (std::exception & e) {
		cout << e.what() << endl;
	}
	return 0;
}