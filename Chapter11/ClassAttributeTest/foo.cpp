/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "foo.h"
#include <iostream>
using namespace std;


int Foo::foo_count = 0;

void Foo::f(){
	int foo_count = 0;
	Foo::foo_count = 0;
	
	cout<<"Local foo_count = "<<foo_count<<endl;
	cout<<"Static foo_count = "<<Foo::foo_count<<endl;
	
}
