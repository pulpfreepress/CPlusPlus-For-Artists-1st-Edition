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
	
	Foo f1(1), f2(2), f3(3);
	
	cout<<f1.getI()<<endl;
	cout<<f2.getI()<<endl;
	cout<<f3.getI()<<endl;
	
	f1 = f2 + f3;
	f2 = f1 + f3;
	f3 = f2 + f1;
	
	cout<<f1.getI()<<endl;
	cout<<f2.getI()<<endl;
	cout<<f3.getI()<<endl;

	f1 = f1 - f1;
	
	cout<<f1.getI()<<endl;

	return 0;
}

