/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:25:09 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/22 18:31:48 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <exception>

using std::cout;
using std::endl;
using std::string;

class Bureaucrat {
	private:
		const string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const &);
		Bureaucrat &operator=(Bureaucrat const &);
		Bureaucrat(const string&, int);
		string getName() const;
		int getGrade() const;
		void inc();
		void dec();

		class GradeTooHighException : public std::exception  {
			public:
				const char* what() const throw();
		};
	
		class GradeTooLowException : public std::exception  {
			public:
				const char* what() const throw();
		};
		 ~Bureaucrat();
};

std::ostream &operator << (std::ostream& output, Bureaucrat const &Ob);