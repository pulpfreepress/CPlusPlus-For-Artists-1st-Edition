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
#include "interface.h"
#include <iostream>
 using namespace std;
 
 class DerivedClassOne : public Interface {
   public:
   	 DerivedClassOne(){cout<<"DerivedClassOne contructor called!"<<endl;}
   	 virtual ~DerivedClassOne(){cout<<"DerivedClassOne destructor called!"<<endl;}
   	 void function_a(){cout<<"DerivedClassOne function_a() called!"<<endl;}
   	 void function_b(){cout<<"DerivedClassOne function_b() called!"<<endl;}
   	 void function_c(){cout<<"DerivedClassOne function_c() called!"<<endl;}
 };
#endif
