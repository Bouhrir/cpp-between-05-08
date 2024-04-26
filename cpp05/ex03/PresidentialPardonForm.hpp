/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:36:15 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/24 16:07:47 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(string const &);
		PresidentialPardonForm(PresidentialPardonForm const &);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &);
		void execute(Bureaucrat const & executor) const;
		~PresidentialPardonForm();
};