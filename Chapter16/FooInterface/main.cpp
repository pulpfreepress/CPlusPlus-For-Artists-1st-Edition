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
using namespace std;  
#include "foo.h"
#include "bar.h"

int main(){	
	
	IFoo* ifptr = new Foo;
	ifptr->f();
	delete ifptr;
	
	IBar* ibptr = new Bar;
	ibptr->b();
	delete ibptr;
	
	return 0;
}

