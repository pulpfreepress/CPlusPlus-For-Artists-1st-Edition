/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef B_H
#define B_H
#include "a.h"
#include <iostream>
using namespace std;

class B : public A {
 public:
   B(){cout<<"Object B created!"<<endl;}
   ~B(){cout<<"Object B destroyed!"<<endl;}
   virtual void f(A& a){ /* expects reference of type A */ 
         cout<<"B::f() called."<<endl;}   
 
};
#endif
