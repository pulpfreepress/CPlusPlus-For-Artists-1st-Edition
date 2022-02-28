/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "scoping.h"
#include <iostream.h>



static int a;

void function_one(int a){

	::a = 7;

	cout<<"Parameter a: "<<a<<endl;
	cout<<"Global a: "<<::a<<endl;
	{
	 int a = 3;
	 cout<<"Block Scope a: "<<a<<endl;
	
	
	}



}
