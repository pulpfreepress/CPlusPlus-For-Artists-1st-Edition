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
   Foo(int ival = 0);
   ~Foo();
   int getI();
   Foo& operator=(int _i);
   Foo& operator++();  			//prefix increment
   Foo& operator++(int);		//postfix increment
    Foo& operator--();			//prefix decrement
   Foo& operator--(int);		//postfix decrement
   friend int operator+(Foo& lhs, Foo& rhs);
   friend int operator-(Foo& lhs, Foo& rhs); 
 private:
   int i;
};
#endif
