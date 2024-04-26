/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:20:08 by obouhrir          #+#    #+#             */
/*   Updated: 2024/01/06 10:55:24 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){
	
}

Serializer::Serializer(Serializer const& Copy){
	*this = Copy;
}

Serializer &Serializer::operator=(Serializer __unused const& Assign){
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr){
	
	return reinterpret_cast <uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw){
	
	return reinterpret_cast <Data *>(raw);
}
Serializer::~Serializer(){
	
}