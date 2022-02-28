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
#include "foo.h"


int main(){	

	Foo f1(3), f2(5);
	
	cout<<f1.getI()<<endl;
	cout<<f2.getI()<<endl;
	
	f1 = f2;
	
	cout<<f1.getI()<<endl;
	cout<<f2.getI()<<endl;
	
	
	return 0;
}

