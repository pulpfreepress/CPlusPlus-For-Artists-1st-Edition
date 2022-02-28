/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef INTERFACE_H
#define INTERFACE_H
#include <iostream>
using namespace std;


class Interface {
  public:
  	Interface(){cout<<"Interface constructor called!"<<endl;}
  	virtual ~Interface(){cout<<"Interface destructor called!"<<endl;}
  	virtual void function_a() = 0;
  	virtual void function_b() = 0;
  	virtual void function_c() = 0;
};
#endif
