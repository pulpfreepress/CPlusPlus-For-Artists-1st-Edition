/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef _FOO_H
#define _FOO_H

class Foo{
 public:
 	Foo(int _i = 0);
 	void setI(int _i);
 	int getI();
 	Foo& operator=(Foo& rhs);
 	Foo& operator+=(Foo& rhs);
 	Foo& operator<<(int shift_by);
 	Foo& operator&(unsigned mask_value);
 	Foo& operator()(int val1, int val2);
 	Foo& operator+();
 	Foo& operator-();
 	Foo* operator->();
 	Foo& operator,(Foo& rhs);
 	Foo& operator,(int);
 private:
 	int i;
};

 Foo& operator+(Foo& lhs, Foo& rhs); 

#endif
