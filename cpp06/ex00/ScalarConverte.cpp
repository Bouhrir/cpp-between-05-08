/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:18:41 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/05 16:17:18 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>

ScalarConverte::ScalarConverte(){

}

ScalarConverte::ScalarConverte(ScalarConverte const& Copy){
	*this = Copy;
}

ScalarConverte &ScalarConverte::operator=(ScalarConverte __unused const& Assign){
	 return *this;
}

int nan(string &literal){
	if (!literal.compare("nan")
		|| !literal.compare("-inf") || !literal.compare("+inf")){
		cout << "char: " << "impossible" << endl;
		cout << "int: " << "impossible" << endl;
		cout << "float: " << literal << endl;
		cout << "double: " << literal << endl;
		return 0;
	}
	return 1;
}
//--------------------------------type--------------------------------------//
int checkType(string &str){
	int type = 0;
	int flag = 0;

	if (str.length() == 1 && !isdigit(str[0]))
		return 'c';
	int i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	for(;str[i];i++){
		if (i == (int)str.length() - 1 && str[i] == 'f'){
			if (type != 'X')
				return 'f';
			return 'X';
		}
		else if (str[i] == '.' && flag == 0){
			type = 'd';
			flag = 1;
		}
		else if (!isdigit(str[i]))
			type = 'X';	
	}
	if (type == 0)
		return 'i';
	return type;
}

int setp(string &literal){
	size_t pos = literal.find('.');
	if (pos == std::string::npos)
		return 1;
	return std::strlen(literal.substr(pos, std::strlen(literal.c_str())).c_str()) - 1;
}
//----------------------------------------------------------------------------//
//--------------------------------print--------------------------------------//
void Char(double res){
	if (res < 32 || res > 127) {
        cout << "None displayable";
    } else if (res <= std::numeric_limits<char>::max() && res >= std::numeric_limits<char>::min()) {
		cout << "'" << static_cast<char>(res) << "'";
    } else {
		cout << "Impossible";
    }
	cout << endl;
}

void Int(double res){
	if (res <= std::numeric_limits<int>::max() && res >= std::numeric_limits<int>::min()) {
		cout << static_cast<int>(res);
    } else {
		cout << "Impossible";
    }
	cout << endl;
}

void Float(double res){
	if (res > std::numeric_limits<float>::max()) {
		cout << "+inff";
    }
	else if (res < -std::numeric_limits<float>::max())
		cout << "-inff";
	else {
		cout << static_cast<float>(res) << "f";
    }
	cout << endl;
}

void Double(double res){
	if (res > std::numeric_limits<double>::max()) {
		cout << "+inf";
    }
	else if (res < -std::numeric_limits<double>::max())
		cout << "-inf";
	else {
		cout << static_cast<double>(res);
    }
	cout << endl;
}
//----------------------------------------------------------------------------//
//------------------------------convert---------------------------------------//
void StoChar(string &literal){
	cout << std::fixed;
	cout << std::setprecision(setp(literal));
	cout << "char: ";Char(literal[0]);
	cout << "int: ";Int(literal[0]);
	cout << "flaot: ";Float(literal[0]);
	cout << "double: ";Double(literal[0]);
}

void StoInt(string &literal, double &res){
	cout << std::fixed;
	cout << std::setprecision(setp(literal));
	cout << "char: "; Char(res);
	cout << "int: "; Int(res);
	cout << "flaot: "; Float(res);
	cout << "double: "; Double(res);
}

void StoFloat(string &literal, double &res){
	literal.erase(literal.length() - 1);
	cout << std::fixed;
	cout << std::setprecision(setp(literal));
	cout << "char: "; Char(res);
	cout << "int: "; Int(res);
	cout << "flaot: ";Float(res);
	cout << "double: "; Double(res);
}

void StoDouble(string &literal, double &res){
	cout << std::fixed;
	cout << std::setprecision(setp(literal));
	cout << "char: ";Char(res);
	cout << "int: "; Int(res);
	cout << "flaot: ";Float(res);
	cout << "double: "; Double(res);
}
//----------------------------------------------------------------------------//

void ScalarConverte::convert(string& literal){

	if (nan(literal))
	{
		int type = checkType(literal);
		double res = std::strtod(literal.c_str(), NULL);
		switch(type){
			case 'c':
				StoChar(literal);
			break;
			case 'i':
				StoInt(literal, res);
			break;
			case 'f':
				StoFloat(literal, res);
			break;
			case 'd':
				StoDouble(literal, res);
			break;
			case 'X':
				cout << "char: " << "impossible" << endl;
				cout << "int: " << "impossible" << endl;
				cout << "float: " << "impossible" << endl;
				cout << "double: " << "impossible" << endl;
			break;
		}
	}
}

ScalarConverte::~ScalarConverte(){

}

