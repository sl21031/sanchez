/*
 * Fraction.hpp
 *
 *  Created on: 16 mai 2014
 *      Author: lau
 */

#ifndef FRACTION_HPP_
#define FRACTION_HPP_
#include <iostream>
#include <string>
#include <sstream>
namespace std {

class Fraction {
public:
	Fraction();
	virtual ~Fraction();
	Fraction(int n, int d);
	int getDenominateur();
	int getNumerateur();
	void setDenominateur(int &iDenominateur);
	void setNumerateur(int &iNumerateur);
    string& afficher(int &iDenominateur,int &iNumerateur);
	void addition(int iDenominateur,int iNumerateur);
	void addition(const Fraction&);
	//void operator+(int)
	//void operator+(const Fraction&)

private:
	int _numerateur;
	int _denominateur;
};

} /* namespace std */

#endif /* FRACTION_HPP_ */
