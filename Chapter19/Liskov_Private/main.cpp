/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include <iostream>
using namespace std;  //introduces namespace std
#include "base.h"
#include "derived.h"

int main()
{	
	Base* b = new Base;
	
	b->f(10);
	
	delete b;
	
	Derived* d = new Derived;
	
	d->f(8);
	
	delete d;
	
	return 0;
}
