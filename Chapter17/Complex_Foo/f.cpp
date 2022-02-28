/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "f.h"
#include "foo.h"
#include <iostream>
using namespace std;


Foo& fooFunction(Foo foo){
    cout<<"fooFunction() called: "<<foo.getVal()<<endl;
	return foo;
}

