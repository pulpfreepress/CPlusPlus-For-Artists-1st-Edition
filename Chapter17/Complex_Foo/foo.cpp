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

Foo::Foo(int i){
	iptr = new int(i);
}

Foo::~Foo(){
	delete iptr;
}

Foo::Foo(Foo& rhs){
	iptr = new int(*(rhs.iptr));
}


Foo& Foo::operator=(Foo& rhs){
  *iptr = *(rhs.iptr);
  return *this;
}

int Foo::getVal(){ return *iptr;}

void Foo::setVal(int i){
	*iptr = i;
}
