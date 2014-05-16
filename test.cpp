#include <iostream>
#include <string>
#include <vector>

#include <gtest/gtest.h>
#include "Fraction.hpp"
using namespace std;



TEST(fraction,test){
	  int A,B;
	  string C;
	  A=3;
	  B=4;
	  C= afficher(A,B);
	  EXPECT_EQ("3/4",C);
}

