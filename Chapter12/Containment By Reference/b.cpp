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
#include "b.h"
#include "a.h"

B::B(A *a_ptr):its_a_ptr(a_ptr){
	cout<<"An object of type B created!"<<endl;
}

B::~B(){
	cout<<"An object of type B destroyed!"<<endl;
}

void B::makeContainedObjectSayHi(){
	if(its_a_ptr != NULL)
	    its_a_ptr->sayHi();
}
