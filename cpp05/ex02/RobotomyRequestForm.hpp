/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:23:04 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/24 16:00:40 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(string const &);
		RobotomyRequestForm(RobotomyRequestForm const &);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &);
		void execute(Bureaucrat const & executor) const;
		~RobotomyRequestForm();
};