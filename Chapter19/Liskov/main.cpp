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
#include "incrementer.h"
#include "derived.h"

int main(){	
	Incrementer* inc_ptr = new Incrementer(95);
	inc_ptr->increment(4);
	inc_ptr->increment(5);
	inc_ptr->increment(3);
	delete inc_ptr;
	

	inc_ptr = new Derived(45);
	inc_ptr->increment(4);
	inc_ptr->increment(5);
	inc_ptr->increment(3);
	delete inc_ptr;

	return 0;
}

