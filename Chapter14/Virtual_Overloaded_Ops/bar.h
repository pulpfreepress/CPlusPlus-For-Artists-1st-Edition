/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef _BAR_H
#define _BAR_H
#include "foo.h"

class Bar : public Foo{
 public:
 	Bar(int _i = 0);
 	~Bar();
 	virtual bool operator==(Bar& rhs);
 	virtual bool operator==(Foo& rhs);
 private:
 	int i;
};
#endif
