/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:23:47 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/22 18:58:33 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

	try {
		Bureaucrat a("miroka", 1);
		Bureaucrat b("skrt7", 150);

		Form x("twitter", 1) , z("instagram", 2);
		a.signForm(x);
		b.signForm(z);
	}
	catch (std::exception & e) {
		cout << e.what() << endl;
	}
	return 0;
}