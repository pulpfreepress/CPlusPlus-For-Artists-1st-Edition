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
using  namespace std;

class A {
  public: 
    A(){cout<<"A created!"<<endl;}
    virtual ~A(){cout<<"A destroyed!"<<endl;}
  	virtual void f() = 0;
};

class B : public  A{
  public:
   B(){cout<<"B created!"<<endl;}
   virtual ~B(){cout<<"B destroyed!"<<endl;}
};

class C : public B{
  public:
  	C(){cout<<"C created!"<<endl;}
  	virtual ~C(){cout<<"C destroyed!"<<endl;}
  	virtual void f(){cout<<"C::f()"<<endl;}
};
#endif
