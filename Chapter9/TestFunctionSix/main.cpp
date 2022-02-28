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
#include "testfunctionsix.h"
using namespace std;  

int main(){	
	int i = 3;
	cout<<"Value of i before function call = "<<i<<endl;
	testFunctionSix(i);
	cout<<"Value of i after function call = "<<i<<endl;
	
	return 0;
}

