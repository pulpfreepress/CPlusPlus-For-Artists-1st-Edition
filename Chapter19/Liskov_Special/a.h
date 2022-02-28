/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef A_H
#define A_H
#include <iostream>
using namespace std;

class A {
 public:
   A(){cout<<"Object A created!"<<endl;}
   ~A(){cout<<"Object A destroyed!"<<endl;}
   virtual void f(A& a){ /* expects reference of type a */ 
       cout<<"A::f() called."<<endl;}   
 
};
#endif
