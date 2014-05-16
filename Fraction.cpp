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

Fraction::Fraction(int n, int d)
{

}

Fraction::~Fraction() {
	// TODO Auto-generated destructor stub
}

Fraction::setDenominateur(int iDenominateur)
{
	_denominateur=iDenominateur;

}
Fraction::setNumerateur(int iNumerateur)
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

string Fraction::afficher(int iDenominateur,int iNumerateur)
{
	string a,b,c;


	c=iDenominateur/iNumérateur;

	return c;

}




} /* namespace std */
