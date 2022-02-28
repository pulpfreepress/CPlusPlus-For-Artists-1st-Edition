/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "testfunctiontwo.h"
#include <iostream>
using namespace std;
							

void testFunctionTwo(){
  
  	static 	int i = 0;
  			int j = 0;
  			
  	cout<<"Local Static i = "<<i++<<endl;
  	cout<<"Local Auto   j = "<<j++<<endl;
	
	
}



