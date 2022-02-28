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

Foo::Foo(int _i):i(_i){}

void Foo::setI(int _i){ i = _i;}

int Foo::getI(){return i;}

Foo& Foo::operator=(Foo& rhs){
   i = rhs.i;
   return *this;
}
	
Foo& Foo::operator+=(Foo& rhs){
	i = i+rhs.i;
	return *this;
}

Foo& Foo::operator<<(int shift_by){
	i <<= shift_by;
	return *this;
}

Foo& Foo::operator&(unsigned mask_value){
	i &= mask_value;
	return *this;
}

Foo& Foo::operator()(int val1, int val2){
	i += (val1 + val2);
	return *this;
}

Foo& Foo::operator+(){
	i = (+i);
	return *this;
}

Foo& Foo::operator-(){
	i = (-i);
	return *this;
}

Foo* Foo::operator->(){
	return this;
}

Foo& Foo::operator,(Foo& rhs){
	cout<<"Foo::operator, followed by Foo object"<<endl;
	rhs; //eliminates compiler warning - rhs parameter not used
	return *this;
}

Foo& Foo::operator,(int){
	cout<<"Foo::operator, followed by int object"<<endl;
	return *this;
}

/****************************************
     Global additive operator
 ****************************************/
 

 Foo& operator+(Foo& lhs, Foo& rhs){
 	lhs.setI(lhs.getI() + rhs.getI());
 	return lhs;
 }
 
