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
#include "testfunctionfour.h"

using namespace std;  

int main()
{	
	int i = 0;
	cout<<"Before function call i = "<<i<<endl;
	testFunctionFour(i);
	cout<<"After function call i = "<<i<<endl;
	
	return 0;
}

