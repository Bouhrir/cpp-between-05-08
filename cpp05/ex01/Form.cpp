/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:53:23 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/22 18:34:07 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), sign(false), gradeSign(150), gradeExecute(1) {

}

Form::Form(const string name, const int gradeS) : name(name), sign(false) ,gradeSign(gradeS) , gradeExecute(1) {
	if (gradeS < 1){
		throw GradeTooHighException();
	}
	else if (gradeS > 150){
		throw GradeTooLowException();
	}
}

Form::Form(const string name, const int gradeS, const int gradeE) : name(name), sign(false) , gradeSign(gradeS), gradeExecute(gradeE){
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

Form::Form(Form const &Copy) : name(Copy.name) , sign(Copy.sign), gradeSign(Copy.gradeSign), gradeExecute(Copy.gradeExecute) {

}

Form &Form::operator=(Form const &Assign) {
	sign = Assign.sign;
	return *this;
}
string Form::getName() const{
	return name;
}

int Form::getSing() const{
	return sign;
}

int Form::getGradS() const{
	return gradeSign;
}

int Form::getGradE() const{
	return gradeExecute;
}

std::ostream &operator<<(std::ostream &output, Form &ins){
	output << "name: " << ins.getName() << endl
	<< "sign status: " << ins.getSing() << endl
	<< "grade to sign: " << ins.getGradS() << endl
	<< "grade to execute: " << ins.getGradE() << endl;
	
	return output;
}

void Form::beSigned(Bureaucrat  &ch){
	if (ch.getGrade() > gradeSign)
		throw Form::GradeTooLowException();
	sign = true;
}

const char *Form::GradeTooHighException::what() const throw(){
	return "is too High";
}

const char *Form::GradeTooLowException::what() const throw(){
	return "is too Low";
}

Form::~Form(){
	
}