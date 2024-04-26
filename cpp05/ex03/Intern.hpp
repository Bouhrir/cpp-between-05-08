/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:30:33 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/25 15:22:25 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

using std::string;
using std::endl;
using std::cout;

class Intern {
	public:
		Intern();
		Intern(Intern const &);
		Intern &operator=(Intern const &);
		
		AForm *makeForm(string const &name, string const &target);
		~Intern();
	
};