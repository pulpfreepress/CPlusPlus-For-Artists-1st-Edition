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

Foo::Foo(int ival):i(ival){}

Foo::~Foo(){};

int Foo::getI(){return i;}

Foo& Foo::operator=(int _i){
	i = _i;
	return *this;
}

Foo& Foo::operator++(){
	++i;
	return *this;
}

Foo& Foo::operator++(int){
	i++;
	return *this;
}

Foo& Foo::operator--(){
	--i;
	return *this;
}

Foo& Foo::operator--(int){
	i--;
	return *this;
}

/**** Friend +, - functions *****/
 int operator+(Foo& lhs, Foo& rhs){
	return lhs.i + rhs.i;
}

int operator-(Foo& lhs, Foo& rhs){
	return lhs.i - rhs.i;
}
