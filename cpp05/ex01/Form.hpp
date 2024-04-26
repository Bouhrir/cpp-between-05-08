/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:53:45 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/22 18:37:19 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <exception>
#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;
class Bureaucrat;
class Form {
	private:
 		const string name;
		bool sign;
		const int gradeSign;
		const int gradeExecute;
	public:
		Form();
		Form(const string, const int);
		Form(const string, const int, const int);
		Form(Form const &);
		Form &operator=(Form const&);
		
		class GradeTooHighException : public std::exception{
			public :
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public :
				const char* what() const throw();
		};
		string getName() const;
		int getSing() const;
		int getGradS() const;
		int getGradE() const;


		void beSigned(Bureaucrat &);
		~Form();
};

std::ostream &operator<<(std::ostream &output, Form &ins);