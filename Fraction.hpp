/*
 * Fraction.hpp
 *
 *  Created on: 16 mai 2014
 *      Author: lau
 */

#ifndef FRACTION_HPP_
#define FRACTION_HPP_

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
	std::string& afficher(int &iDenominateur,int &iNumerateur);
	//void addition(int iDenominateur,int iNumerateur);
	//void addition(const Fraction&);

private:
	int _numerateur;
	int _denominateur;
};

} /* namespace std */

#endif /* FRACTION_HPP_ */
