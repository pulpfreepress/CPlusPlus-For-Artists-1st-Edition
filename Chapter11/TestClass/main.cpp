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
#include "testclass.h"
using namespace std; 
 
int main(){	
	TestClass t1, t2(45, 5), t3(3);
	TestClass t4(t2);
	t2 = t1;
	cout<<"CONST_VAL = "<<t2.getConstVal()<<endl;
	cout<<"        i = "<<t2.getI()<<endl;
	return 0;
}

