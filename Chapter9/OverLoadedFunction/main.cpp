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
#include "functiona.h"
using namespace std;  

int main(){	
	int ival1 = 1, ival2 = 2;
	float fval = 25.345;
	char char_array[] = "\"Hello World!\"";
	
	functionA();
	functionA(ival1);
	functionA(fval);
	functionA(ival1, ival2);
	functionA(char_array);

	return 0;
}

