/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:22:45 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/25 15:46:14 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
	
}

Intern::Intern(Intern const &Copy){
	*this = Copy;
}

Intern &Intern::operator=(Intern __unused const &Assing){
	return *this;
}

AForm *Intern::makeForm(string const &name, string const &target){
	
	string fname[3] = {"shrubbery creation","robotomy request","presidential pardon"};

	AForm *form[3];
	form[0] = new ShrubberyCreationForm(target);
	form[1] = new RobotomyRequestForm(target);
	form[2] = new PresidentialPardonForm(target);
	for(int i = 0; i < 3; i++){
		if (fname[i] == name){
			cout << " Intern creates " << fname[i] << endl;
			return form[i];
		}
	}
	throw std::invalid_argument("Intern couldn't create");
	return NULL;
}

Intern::~Intern(){
	
}