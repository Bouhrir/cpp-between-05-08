/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:07:04 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/24 15:40:55 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
	private:
		string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(string const &);
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
		void execute(Bureaucrat const & executor) const;
		~ShrubberyCreationForm();
		
		
		
};