/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "foo.h"

int main()
{	
	Foo f1(1, 2.5), f2(f1), f3;
	f3 = f1;
	
	f1.printAttributes();
	f2.printAttributes();
	f3.printAttributes();
	
	f1.incrementI();
	f1.incrementF();
	f1.printAttributes();
	
	f1.incrementI(5);
	f1.incrementF(5.5);
	f1.printAttributes();
	
	
	
	return 0;
}

