/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:56:17 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/05 19:07:17 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Base{
	public:
		virtual ~Base();	
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);