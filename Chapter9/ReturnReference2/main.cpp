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
#include "getlargestinteger.h"
using namespace std;

int main()
{	
	int ival1 = 0, ival2 = 1;
	
	cout<<"The largest number is: "<<getLargestInteger(ival1, ival2)<<endl;
	
	int& largest_int = getLargestInteger(ival1, ival2);
	
	largest_int = -8;
	
	cout<<"The largest number is: "<<getLargestInteger(ival1, ival2)<<endl;
	
	return 0;
}

