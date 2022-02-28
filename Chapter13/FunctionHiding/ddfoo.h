/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/
#ifndef DERIVED_DERIVED_FOO_H
#define DERIVED_DERIVED_FOO_H
#include "derivedfoo.h"

class DDFoo : public DerivedFoo {
	public:
		DDFoo(int _i = 0):DerivedFoo(_i){}

	};
#endif
