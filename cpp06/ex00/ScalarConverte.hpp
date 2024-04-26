/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:52:24 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/05 13:35:05 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class  ScalarConverte {
	private:
		ScalarConverte();
		ScalarConverte(ScalarConverte const&);
		ScalarConverte &operator=(ScalarConverte const&);
	public:
		static void convert(string&);
		~ScalarConverte();
};