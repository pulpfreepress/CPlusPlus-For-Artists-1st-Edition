/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include <iostream>
#include "foo.h"
#include "f.h"
using namespace std;

int main()
{	
	Foo f0, f1(1), f2(2);
	cout<<f0.getVal()<<endl;
	cout<<f1.getVal()<<endl;
	cout<<f2.getVal()<<endl;
	cout<<"-------------"<<endl;
	Foo f3(f2);
	cout<<f3.getVal()<<endl;
	f3 = f1;
	cout<<f3.getVal()<<endl;
	cout<<"-------------"<<endl;
	f3.setVal(3);
	cout<<f0.getVal()<<endl;
	cout<<f1.getVal()<<endl;
	cout<<f2.getVal()<<endl;
	cout<<f3.getVal()<<endl;
	cout<<"-------------"<<endl;
	f3 = fooFunction(f2);
	cout<<f3.getVal()<<endl;
	
	return 0;
}

