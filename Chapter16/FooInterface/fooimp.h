/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef FOO_IMP_H
#define FOO_IMP_H
#include "ifoo.h"

class Foo : public IFoo{
	public:
	    Foo();
	    virtual ~Foo();
		void f();

};
#endif
