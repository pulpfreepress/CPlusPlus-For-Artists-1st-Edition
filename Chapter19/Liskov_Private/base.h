/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef BASE_CLASS
#define BASE_CLASS
#include <iostream>
using namespace std;
#include <assert.h>

class Base {
  public:
  	Base(){cout<<"Base object created!"<<endl;}
  	virtual ~Base(){cout<<"Base object destroyed!"<<endl;}
  	virtual void f(int i){cout<<"Base f() precondition i<= 10: i = "<<i<<endl;
  				  assert(i<= 10);}
};

#endif
