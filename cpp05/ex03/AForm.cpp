/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:53:23 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/23 16:03:23 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("default"), sign(false), gradeSign(150), gradeExecute(1) {

}

AForm::AForm(const string name, const int gradeS) : name(name), sign(false) ,gradeSign(gradeS) , gradeExecute(1) {
	if (gradeS < 1){
		throw GradeTooHighException();
	}
	else if (gradeS > 150){
		throw GradeTooLowException();
	}
}

AForm::AForm(const string name, const int gradeS, const int gradeE) : name(name), sign(false) , gradeSign(gradeS), gradeExecute(gradeE){
	//sign
	if (gradeS < 1 ){
		throw GradeTooHighException();
	}
	else if (gradeS > 150){
		throw GradeTooLowException();
	}
	//exec
	if (gradeE < 1 ){
		throw GradeTooHighException();
	}
	else if (gradeE > 150){
		throw GradeTooLowException();
	}
}

AForm::AForm(AForm const &Copy) : name(Copy.name) , sign(Copy.sign), gradeSign(Copy.gradeSign), gradeExecute(Copy.gradeExecute) {

}

AForm &AForm::operator=(AForm const &Assign) {
	sign = Assign.sign;
	return *this;
}
string AForm::getName() const{
	return name;
}

int AForm::getSing() const{
	return sign;
}

int AForm::getGradS() const{
	return gradeSign;
}

int AForm::getGradE() const{
	return gradeExecute;
}

std::ostream &operator<<(std::ostream &output, AForm &ins){
	output << "name: " << ins.getName() << endl
	<< "sign status: " << ins.getSing() << endl
	<< "grade to sign: " << ins.getGradS() << endl
	<< "grade to execute: " << ins.getGradE() << endl;
	
	return output;
}

void AForm::beSigned(Bureaucrat  &ch){
	if (ch.getGrade() > gradeSign)
		throw AForm::GradeTooLowException();
	sign = true;
}

const char *AForm::GradeTooHighException::what() const throw(){
	return "is too High";
}

const char *AForm::GradeTooLowException::what() const throw(){
	return "is too Low";
}

AForm::~AForm(){
	
}