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
#include <iostream>
using namespace std;

Bar::Bar(int _i):Foo(_i), i(_i){}

Bar::~Bar(){}

bool Bar::operator==(Bar& rhs){
	cout<<"Bar == called"<<endl;
	return i == rhs.i;
}

bool Bar::operator==(Foo& rhs){
	cout<<"Bar(Foo) == called."<<endl;
	return i == rhs.getI();
}
