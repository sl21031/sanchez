/*
 * Fraction.cpp
 *
 *  Created on: 16 mai 2014
 *      Author: lau
 */

#include "Fraction.hpp"
using namespace std;
#include <iostream>
#include <string>
#include <sstream>
namespace std {

Fraction::Fraction(){_denominateur=0;
_numerateur=0;
	// TODO Auto-generated constructor stub

}

Fraction::Fraction(int _numerateur, int _denominateur)
{

}

Fraction::~Fraction() {
	// TODO Auto-generated destructor stub
}

void Fraction::setDenominateur(int &iDenominateur)
{
_denominateur=iDenominateur;

}
void Fraction::setNumerateur(int &iNumerateur)
{
	_numerateur= iNumerateur;
}

int Fraction::getNumerateur()
{
	return _numerateur;
}
int Fraction::getDenominateur()
{
	return _numerateur;
}

std::string& Fraction::afficher(int &iNumerateur,int &iDenominateur)
{
	std::string a,b,c;
	a=iDenominateur;
	b=iNumerateur;
	c.insert(1,b);
	c.insert(1,"/");
	c.insert(1, a);
	cout<<c<<endl;

}

//void Fraction::addition(int iDenominateur,int iNumerateur)
//{


	//int E;
	//E=



//void Fraction::addition(const Fraction&)




} /* namespace std */
