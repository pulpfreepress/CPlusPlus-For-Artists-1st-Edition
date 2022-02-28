/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef DERIVED_CLASS_ONE_H
#define DERIVED_CLASS_ONE_H
#include "abstractclass.h"
#include <iostream>
using namespace std;

class DerivedClassOne : public AbstractClass {
	public:
		DerivedClassOne(){cout<<"DerivedClassOne object created"<<endl;}
		virtual ~DerivedClassOne(){cout<<"DerivedClassOne object destroyed!"<<endl;}
		virtual void f(){cout<<"DerivedClassOne f() called!"<<endl;}

};

#endif
