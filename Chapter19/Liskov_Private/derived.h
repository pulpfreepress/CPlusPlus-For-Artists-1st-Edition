/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef DERIVED_CLASS
#define DERIVED_CLASS
#include "base.h"
#include <iostream>
using namespace std;
#include <assert.h>

class Derived : private Base {
  public:
  	Derived(){cout<<"Derived object created!"<<endl;}
  	virtual ~Derived(){cout<<"Derived object destroyed!"<<endl;}
  	virtual void f(int i){Base::f(i);
  						  cout<<"Derived f() precondition i<= 8: i = "<<i<<endl;
  				          assert(i<= 8);}
};

#endif
