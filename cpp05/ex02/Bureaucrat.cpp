/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:10:37 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/24 15:57:46 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("BOSS"), grade(1){

}

Bureaucrat::Bureaucrat(Bureaucrat const &Copy){
	*this = Copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &Assign) {
	grade = Assign.getGrade();
	return *this;
}

Bureaucrat::Bureaucrat(const string &name, int grade) : name(name) , grade(grade){
	if (grade < 1){
		throw GradeTooHighException();
	}
	else if (grade > 150){
		throw GradeTooLowException();
	}
}

string Bureaucrat::getName() const{
	return name;
}

int Bureaucrat::getGrade() const{
	return grade;
}

void Bureaucrat::inc(){
	grade--;
	if (grade < 1){
		throw GradeTooHighException();
	}
}

void Bureaucrat::dec(){
	grade++;
	if (grade > 150){
		throw GradeTooLowException();
	}
}

std::ostream &operator << (std::ostream& output, Bureaucrat const &Ob){
	output << Ob.getName() << ", bureaucrat grade " << Ob.getGrade();
	return output;
}

void Bureaucrat::signForm(AForm &form){
	
	try{
		form.beSigned(*this);
		cout << name << " signed " << form.getName() << endl;
	}
	catch (AForm::GradeTooLowException &e){
		cout << name << " couldn't sign " << form.getName() << " because " << e.what() << endl;
	}
}
void Bureaucrat::executeForm(AForm const & form){
	try{
		form.execute(*this);
		cout << name << " executed " << form.getName() << endl;
	}
	catch (std::exception &e){
		cout << name << " couldn't execute " << form.getName() << " because " << e.what() << endl; 
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return "is too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return "is too Low";
}

Bureaucrat::~Bureaucrat(){

}