/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef DERIVED_CLASSES_H
#define DERIVED_CLASSES_H
#include "baseclass.h"
#include <iostream>
using namespace std;

class DClassOne : public BaseClass{
	public:
	  DClassOne(){}
	  virtual ~DClassOne(){}
	  virtual void f(){cout<<"DClassOne f() "<<endl;}

};


class DClassTwo : public BaseClass{
	public:
	  DClassTwo(){}
	  virtual ~DClassTwo(){}
	  virtual void f(){cout<<"DClassTwo f() "<<endl;}

};

#endif
