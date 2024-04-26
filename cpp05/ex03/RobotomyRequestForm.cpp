/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:26:45 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/24 16:04:21 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45){
	this->target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(string const &target) : AForm("RobotomyRequestForm", 72, 45){
	this->target = target;
	
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &Copy){
	*this = Copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &Assign){
	target = Assign.target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (getSing() == false)
		throw AForm::GradeTooLowException();
	if (executor.getGrade() > getGradE())
    	throw AForm::GradeTooLowException();
	int success = rand() % 2;
    if (success)
		cout << target << " has been robotomized successfully" << endl;
    else
		cout << "the robotomy failed" << endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	
}