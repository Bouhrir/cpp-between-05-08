/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:58:39 by obouhrir          #+#    #+#             */
/*   Updated: 2024/01/06 11:00:47 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){}

Base *generate(void){
	srand(time(NULL));
	int choice = rand() % 3;
    switch (choice) {
        case 0:
			return new A;
        case 1:
			return new B;
        default:
			return new C;
    }
}

void identify(Base* p){
	if (dynamic_cast <A *>(p))
		cout << "A" << endl;
	else if (dynamic_cast <B *>(p))
		cout << "B" << endl;
	else if (dynamic_cast <C *>(p))
		cout << "C" << endl;
}

void identify(Base& p){
	try {
		Base __unused &a = dynamic_cast <A &>(p);
		cout << "A" << endl;	
	}
	catch(std::bad_cast &e){
		try {
			Base __unused &b = dynamic_cast <B &>(p);
			cout << "B" << endl;
		}
		catch (std::bad_cast &e){
			try {
				Base __unused &c = dynamic_cast <C &>(p);
				cout << "C" << endl;
			}
			catch (std::bad_cast &e){
				cout << e.what() << endl;
			}
		}
	}
}