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
#include <iostream>
using namespace std;

class Foo{
	public:
		Foo(int _i = 0):i(_i){}
		friend ostream& operator<<(ostream& out, Foo rhs);
		
	private:
		int i;
};

ostream& operator<<(ostream& out, Foo rhs){
	out<<rhs.i<<endl;
	return out;
}

#endif
