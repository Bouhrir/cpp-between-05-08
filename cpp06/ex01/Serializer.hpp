/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:37:18 by obouhrir          #+#    #+#             */
/*   Updated: 2024/01/06 10:55:27 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
using std::string;
using std::cout;
using std::endl;

struct Data{
	uintptr_t value;
};

class Serializer {
	private:
		Serializer();	
		Serializer(Serializer const&);	
		Serializer &operator=(Serializer const&);
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		~Serializer();
};