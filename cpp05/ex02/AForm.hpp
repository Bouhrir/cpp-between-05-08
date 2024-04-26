/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:53:45 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/23 18:39:15 by obouhrir         ###   ########.fr       */
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
class AForm {
	private:
 		const string name;
		bool sign;
		const int gradeSign;
		const int gradeExecute;
	public:
		AForm();
		AForm(const string, const int);
		AForm(const string, const int, const int);
		AForm(AForm const &);
		AForm &operator=(AForm const&);
		
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

		virtual void execute(Bureaucrat const & executor) const = 0;
		~AForm();
};

std::ostream &operator<<(std::ostream &output, AForm &ins);