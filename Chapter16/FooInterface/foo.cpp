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


Foo::Foo(){
	cout<<"Foo object constructed."<<endl;
}

Foo::~Foo(){
	cout<<"Foo object destroyed."<<endl;
}

void Foo::f(){
	cout<<"Foo::f() function called!"<<endl;
}
