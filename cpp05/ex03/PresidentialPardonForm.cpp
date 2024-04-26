/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:40:03 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/24 16:24:30 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5){
	target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(string const &target) : AForm("PresidentialPardonForm", 25, 5){
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &Copy){
	*this = Copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &Assign){

	this->target = Assign.target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (getSing() == false)
		throw AForm::GradeTooLowException();
	if (executor.getGrade() > getGradE())
		throw AForm::GradeTooLowException();
	cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox.\n";
}

PresidentialPardonForm::~PresidentialPardonForm(){
	
}