/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "bar.h"
#include <iostream.h>
using namespace std;

Bar::Bar(){
	cout<<"Bar object created."<<endl;
}

Bar::~Bar(){
	cout<<"Bar object destroyed."<<endl;
}

void Bar::b(){
    cout<<"Bar::b() function called."<<endl;
 }
