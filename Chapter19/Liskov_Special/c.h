/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef C_H
#define C_H
#include "b.h"
#include <iostream>
using namespace std;

class C : public B {
 public:
   C(){cout<<"Object C created!"<<endl;}
   ~C(){cout<<"Object C destroyed!"<<endl;}
 private:
   virtual void f(A& a){ /* expects reference of type A */ 
      cout<<"C::f() called."<<endl;}   
 
};
#endif
