/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/
#include "super.h"
#include "sub.h"
#include <iostream>

using namespace std;


int main()
{	
	Super *s = new Sub;
	
	delete s;
	
	return 0;
}

