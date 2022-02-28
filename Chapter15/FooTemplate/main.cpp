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
#include "foodef.h"
using namespace std;  

int main()
{	
	Foo<int> f1(1);
	Foo<char> f2('d');
	
	cout<<f1.getVal()<<endl;
	cout<<f2.getVal()<<endl;
	return 0;
}

