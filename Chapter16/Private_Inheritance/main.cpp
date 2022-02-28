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
#include "allclasses.h"

int main(){	
	
	Base* bptr = new Base();
	bptr->f();
	delete bptr;
	//bptr = new Derived();
	//bptr->f();
	//delete bptr;
	
	Derived* dptr = new Derived();
	dptr->f();
	dptr->g();
	
	return 0;
}

