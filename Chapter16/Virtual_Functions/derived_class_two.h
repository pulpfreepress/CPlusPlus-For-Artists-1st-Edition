/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef DERIVED_CLASS_TWO_H
#define DERIVED_CLASS_TWO_H
#include "derived_class_one.h"
#include <iostream>
using namespace std;

class DerivedClassTwo : public DerivedClassOne {
 public:
 	DerivedClassTwo(){cout<<"DerivedClassTwo constructor called!"<<endl;}
 	virtual ~DerivedClassTwo(){cout<<"DerivedClassTwo destructor called!"<<endl;}
 	void function_c(){cout<<"DerivedClassTwo function_c() called!"<<endl;}
};
#endif
