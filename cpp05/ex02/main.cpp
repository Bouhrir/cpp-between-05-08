/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:23:47 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/24 16:53:48 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main(){

	try {
		Bureaucrat a("miroka", 137);
		Bureaucrat b("skrt7", 45);
		Bureaucrat c("7afozli9", 5);

		
		cout << "\033[32m------------Shrubbery Creation Form-----------\n\033[0m";
		ShrubberyCreationForm x("tree");
		
		x.beSigned(a);
		x.execute(a);
		cout << "open _shrubbery file\n";
		
		cout << "\033[32m\n------------Robotomy Request Form-----------\n\033[0m";
		RobotomyRequestForm y("robot");
		
		y.beSigned(b);
		y.execute(b);
		
		cout << "\033[32m\n----------Presidential Pardon Form----------\n\033[0m";
		PresidentialPardonForm z("President");

		z.beSigned(c);
		z.execute(c);
		
		cout << "\033[32m\n--------Execute  Form------\n\033[0m";
		a.executeForm(x);
	}
	catch (std::exception & e) {
		cout << e.what() << endl;
	}
	return 0;
}