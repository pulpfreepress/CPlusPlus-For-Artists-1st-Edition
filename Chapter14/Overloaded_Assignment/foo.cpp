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

Foo::Foo(int _i):i(_i){}

void Foo::setI(int _i){ i = _i;}

int Foo::getI(){return i;}

Foo& Foo::operator=(Foo& rhs){
   i = rhs.i;
   return *this;
}
	
