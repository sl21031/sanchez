/*
 * Fraction.cpp
 *
 *  Created on: 16 mai 2014
 *      Author: lau
 */

#include "Fraction.hpp"

namespace std {

Fraction::Fraction() {
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

string& Fraction::afficher(int &iNumerateur,int &iDenominateur)
	string c;
	c = iDenominateur + "/"+ iNumérateur;
	return c;

}
//Fraction::addition()
//void addition(const Fraction&)



} /* namespace std */
