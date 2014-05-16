#include <iostream>
#include <string>
#include <vector>

#include <gtest/gtest.h>
#include "Fraction.hpp"




TEST(fraction,test){
	  int A,B;
	  A="3";
	  B="4";
	  afficher(A,B);
	  EXPECT_EQ("3/4");
}

TEST(addition,test){
	  int A,B;
	  A="3";
	  B="4";
	  afficher(A,B);
	  EXPECT_EQ("3/4");
}
