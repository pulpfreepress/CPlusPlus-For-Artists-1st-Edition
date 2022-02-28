/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef ALL_CLASSES_H
#define ALL_CLASSES_H
#include <iostream>
using namespace std;

class A {
 public:
  virtual ~A(){}
  void f(){cout<<"A::f()"<<endl;}
};

class B : public A{
 public:
  virtual ~B(){}
  void f(){cout<<"B::f()"<<endl;}
};
#endif
